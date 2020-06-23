#include "holberton.h"
/**
 * _strcpy - copies the string pointed to by src,
 *  including the terminating null byte (\0),
 *  to the buffer pointed to by dest
 * @dest: Destination pointer
 * @src: Source pointer
 *
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i, count = 0;

	for (i = 0; *(src + i) != '\0'; i++)
		count++;
	for (i = 0; i <= count; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
