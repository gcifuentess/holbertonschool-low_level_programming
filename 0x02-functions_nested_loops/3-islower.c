#include "holberton.h"

/**
 * _islower - checks for lowercase character
 * @c: int value for the ASCII value to check
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	int i, r;

	for (i = 97; i <= 122; i++)
	{
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
