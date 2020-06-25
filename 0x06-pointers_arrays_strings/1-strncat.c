#include "holberton.h"

/**
 * _strncat - concatenates two strings
 * it will use at most n bytes from src; and
 * src does not need to be null-terminated if it contains n or more bytes
 * @dest: is the destination pointer
 * @src: is the source pointer
 * @n: number of bytes
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0';) /*just increment i*/
		i++;
	for (j = 0; j <= n - 1 && src[j] != '\0'; j++)
		dest[i + j] = src[j];

	return (dest);
}
