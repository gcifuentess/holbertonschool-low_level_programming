#include "holberton.h"

/**
 * _strncpy - function that copies a string
 * @dest: is the destination pointer
 * @src: is the source pointer
 * @n: number of bytes
 * Return: a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
