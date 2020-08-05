#include "holberton.h"

#define USAGE "Usage: cp file_from file_to\n"
#define NOREAD_ERR "Error: Can't read from file %s\n"
#define NOWRITE_ERR "Error: Can't write to %s\n"
#define NOCLOSE_ERR "Error: Can't close fd %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - copies the content of a file to another file
 * @argc: Counts the number of arguments. Always == 3.
 * @argv: Array with the strings of the names of the arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	ssize_t check_file_to, check_file_from;
	int fd_file_from, fd_file_to;
	char *buffer[1024];
	size_t buffer_size = 1024;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, USAGE);
		exit(97);
	}
	fd_file_from = open(argv[1], O_RDONLY);
	fd_file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, PERMISSIONS);
	while ((check_file_from = read(fd_file_from, buffer, buffer_size)) > 0)
	{
		if (write(fd_file_to, buffer, check_file_from)
		    != check_file_from)
		{
			dprintf(STDOUT_FILENO, NOWRITE_ERR, argv[2]);
			exit(99);
		}
	}
	if (check_file_from == -1)
	{
		dprintf(STDOUT_FILENO, NOREAD_ERR, argv[1]);
		exit(98);
	}
	check_file_from = close(fd_file_from);
	check_file_to = close(fd_file_to);
	if (check_file_from == -1)
	{
		dprintf(STDERR_FILENO, NOCLOSE_ERR, fd_file_from);
		exit(100);
	}
	if (check_file_to == -1)
	{
		dprintf(STDERR_FILENO, NOCLOSE_ERR, fd_file_to);
		exit(100);
	}

	return (0);
}
