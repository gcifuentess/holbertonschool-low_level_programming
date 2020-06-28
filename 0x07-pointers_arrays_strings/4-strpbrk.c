#include "holberton.h"

/**
 * _strpbrk - locates the first occurrence in the
 * string s of any of the bytes in the string accept
 * @s: The pointer of the string to evaluate
 * @accept: the pointer of the string of the bytes to accept
 *
 * Return: Pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *dest;
	int i, j;

	dest = NULL;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				dest = s + i;
				break;
			}
		}
		if (dest !=  NULL)
			break;
	}

	return (dest);
}
