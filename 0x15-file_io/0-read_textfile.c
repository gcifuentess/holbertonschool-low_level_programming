#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 * @filename: the file to read.
 * @letters: is the number of letters it should read and print.
 *
 * Return: -the actual number of letters it could read and print
 *         -if the file can not be opened or read, return 0
 *         -if filename is NULL return 0.
 *         -if write fails or does not write the expected amount
 *          of bytes, return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t toPrint, printed;
	int fd;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	toPrint = read(fd, buf, letters);
	if (toPrint == -1)
	{
		free(buf);
		return (0);
	}


	printed = write(STDOUT_FILENO, buf, toPrint);
	if (printed == -1)
	{
		free(buf);
		return (0);
	}


	close(fd);
	free(buf);

	if (printed != toPrint)
		return (0);

	return (printed);
}
