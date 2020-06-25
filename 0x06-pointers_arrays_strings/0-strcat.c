#include "holberton.h"

/**
 * _strcat - concatenates two strings
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++) /*just increment i*/
	{
	}

	for (j = 0; src[j] != '\0'; j++)
		dest[i + j] = src[j];

	return (dest);
}
