#include "holberton.h"

#define USAGE "Usage: cp file_from file_to\n"
#define NOREAD_ERR "Error: Can't read from file %s\n"
#define NOWRITE_ERR "Error: Can't write to %s\n"
#define NOCLOSE_ERR "Error: Can't close fd %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

int write_buffer(const char *argv1, const char *argv2);

/**
 * main - copies the content of a file to another file
 * @argc: Counts the number of arguments. Always == 3.
 * @argv: Array with the strings of the names of the arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char **argv)
{

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, USAGE);
		exit(97);
	}

	write_buffer(argv[1], argv[2]);

	return (0);
}

/**
 * main - copies the content of a file to another through a buffer
 * @argv1: File Origin.
 * @argv2: File Destination.
 *
 * Return: 1 on success, -1 on failure.
 */
int write_buffer(const char *argv1, const char *argv2)
{
	ssize_t check_to, check_from;
	int fd_to, fd_from;
	char *buffer[1024];
	size_t buffer_size = 1024;

	fd_from = open(argv1, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDOUT_FILENO, NOREAD_ERR, argv1);
		exit(98);
	}
	fd_to = open(argv2, O_CREAT | O_WRONLY | O_TRUNC, PERMISSIONS);
	while ((check_from = read(fd_from, buffer, buffer_size)) > 0)
	{
		if (write(fd_to, buffer, check_from) != check_from)
		{
			dprintf(STDOUT_FILENO, NOWRITE_ERR, argv2);
			exit(99);
		}
	}
	if (check_from == -1)
	{
		dprintf(STDOUT_FILENO, NOREAD_ERR, argv1);
		exit(98);
	}
	check_from = close(fd_from);
	check_to = close(fd_to);
	if (check_from == -1)
		dprintf(STDERR_FILENO, NOCLOSE_ERR, fd_from);
	if (check_to == -1)
		dprintf(STDERR_FILENO, NOCLOSE_ERR, fd_to);
	if (check_to == -1 || check_from == -1)
		exit(100);

	return (0);
}
