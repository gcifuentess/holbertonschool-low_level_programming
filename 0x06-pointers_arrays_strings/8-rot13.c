#include "holberton.h"

/**
 * rot13 - encodes a string using rot13
 * @s: the pointer of the string to be encoded
 *
 * Return: the pointer of the encoded string
 */
char *rot13(char *s)
{
	int letter[52] = {'a', 'A', 'b', 'B', 'c', 'C', 'd', 'D', 'e', 'E', 'f',
			  'F', 'g', 'G', 'h', 'H', 'i', 'I', 'j', 'J', 'k', 'K',
			  'l', 'L', 'm', 'M', 'n', 'N', 'o', 'O', 'p', 'P', 'q',
			  'Q', 'r', 'R', 's', 'S', 't', 'T', 'u', 'U', 'v', 'V',
			  'w', 'W', 'x', 'X', 'y', 'Y', 'z', 'Z'};
	int code[52] = {'n', 'N', 'o', 'O', 'p', 'P', 'q', 'Q', 'r', 'R', 's',
			'S', 't', 'T', 'u', 'U', 'v', 'V', 'w', 'W', 'x', 'X',
			'y', 'Y', 'z', 'Z', 'a', 'A', 'b', 'B', 'c', 'C', 'd',
			'D', 'e', 'E', 'f', 'F', 'g', 'G', 'h', 'H', 'i', 'I',
			'j', 'J', 'k', 'K', 'l', 'L', 'm', 'M'};
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == letter[j])
			{
				s[i] = code[j];
				break;
			}
		}
	}

	return (s);
}
