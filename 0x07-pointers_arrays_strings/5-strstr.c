#include "holberton.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: The pointer to the string to evaluate
 * @needle: The pointer of the string to look for
 *
 * Descripton:  finds the first occurrence of the substring
 * needle in the string haystack. The terminating null bytes
 * (\0) are not compared
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j = 0, count = 0;
	char *located = 0;

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
			{
				count++;
				j++;
				break;
			}
		}
		if (count == 1)
			located = &haystack[j - 1];
	}
	if (i >= count)
		return (located);

	return (0);
}
