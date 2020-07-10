#include "holberton.h"

/**
 * string_nconcat - desc
 * @s1: desc
 * @s2: desc
 * @n: des
 *
 * Return: des
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	(void)n;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	ptr = malloc(1);

	if (!ptr)
		return (NULL);

	return (ptr);
}
