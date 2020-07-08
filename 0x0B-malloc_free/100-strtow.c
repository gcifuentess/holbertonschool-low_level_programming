#include "holberton.h"

/**
 * strtow - desc
 * @str: desc
 *
 * Return: desc
 */
char **strtow(char *str)
{
	char **dptr;

	if (str == NULL || str[1] == '\0' )
		return (NULL);

	dptr = malloc(1);

	if (dptr == NULL)
		return (NULL);

	return (dptr);
}
