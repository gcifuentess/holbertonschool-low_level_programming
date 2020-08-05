#include "holberton.h"

int _strlen(char *s);

/**
 * create_file - creates a file.
 * @filename: is the name of the file to create.
 * @text_content: NULL terminated string to write to the file.
 *
 * Requirements: -The created file must have those permissions:
 *                rw-------. If the file already exists, do not
 *                change the permissions.
 *               -if the file already exists, truncate it.
 *               -if filename is NULL return -1.
 *               -if text_content is NULL create an empty file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, check;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (!text_content)
		check = write(fd, "", 1);
	else
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
