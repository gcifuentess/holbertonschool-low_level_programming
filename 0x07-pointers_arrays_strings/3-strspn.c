#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: The pointer of the string to evaluate
 * @accept: the pointer of the string of the bytes to accept
 *
 * Return: number of bytes in the initial segment of s which
 * consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int bytes = 0, temp = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				bytes++;
				break;
			}
		}
		if (bytes == temp)
			break;
		temp = bytes;
	}

	return (bytes);
}
