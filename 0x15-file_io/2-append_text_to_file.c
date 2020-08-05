#include "holberton.h"

int _strlen(char *s);

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: is the name of the file to create.
 * @text_content: NULL terminated string to write to the file.
 *
 * Requirements: -Do not create the file if it does not exist.
 *               -if filename is NULL return -1.
 *               -if text_content is NULL, do not add anything
 *                to the file. Return 1 if the file exists and -1
 *                if the file does not exist or if you do not have
 *                the required permissions to write the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, check;

	check = 1;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
		check = write(fd, text_content, _strlen(text_content));

	close(fd);

	if (check == -1)
		return (-1);

	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: The original string
 *
 * Return: length of s.
 */
int _strlen(char *s)
{
	int length = 0, i;

	for (i = 0; s[i] != '\0'; i++)
		length = i + 1;

	return (length);
}
