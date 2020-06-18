#include "holberton.h"

/**
 * _isupper -   checks for uppercase character
 * @c: the int value (ascii) of a character
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
