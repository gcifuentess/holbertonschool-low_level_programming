#include "holberton.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: int value for the ASCII value to check
 *
 * Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise.
 */
int _isalpha(int c)
{
	int i, r;

	for (i = 65; i <= 122; i++)
	{
		if (i > 90 && i < 97)
		{
			i = 97;
			continue;
		}

		if (c == i)
		{
			r = 1;
			break;
		}
		else
		{
			r = 0;
		}
	}
	return (r);
}
