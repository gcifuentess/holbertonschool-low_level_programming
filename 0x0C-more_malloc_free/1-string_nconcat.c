#include "holberton.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: chars to concat
 *
 * Description: -The returned pointer shall point to a newly allocated
 *               space in memory, which contains s1, followed by the
 *               first n bytes of s2, and null terminated.
 *              -If the function fails, it should return NULL.
 *              -If n is greater or equal to the length of s2
 *               then use the entire string s2.
 *              -If NULL is passed, treat it as an empty string.
 *
 * Return: Pointer or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len1 = 0, len2 = 0, concat, temp;

	if (!s1)
		len1 = 1;
	if (!s2)
		len2 = 1;

	if (len1 == 0)
	{
		for (; s1[len1] != '\0'; len1++)
		{
		}
	}
	if (len2 == 0)
	{
		for (; s2[len2] != '\0'; len2++)
		{
		}
		len2++;
	}
	if (len2 > n)
		len2 = n;

	ptr = malloc(sizeof(char) * (len1 + len2));
	if (!ptr)
		return (NULL);

	for (concat = 0, temp = 0; concat < (len1 + len2); concat++)
	{
		if (concat < len1)
			ptr[concat] = s1[concat];
		else
			ptr[concat] = s2[temp++];
	}

	return (ptr);
}
