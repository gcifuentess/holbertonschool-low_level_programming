#include "holberton.h"

/**
 * argstostr - desc
 * @ac: desc
 * @av: desc
 *
 * Return: desc
 */
char *argstostr(int ac, char **av)
{
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	ptr = malloc(1);

	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
