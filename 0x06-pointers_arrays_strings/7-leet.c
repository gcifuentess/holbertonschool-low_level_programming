#include "holberton.h"

/**
 * leet - Write a function that encodes a string into 1337
 * @s: the string to encode
 *
 * Description:
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * Return: the pointer of the changed string
 */
char *leet(char *s)
{
	int letters[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int code[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = code[j];
				break;
			}
		}
	}

	return (s);
}
