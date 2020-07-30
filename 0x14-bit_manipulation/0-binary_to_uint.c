#include "holberton.h"

/**
 * binary_to_uint - onverts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if here is one or more chars
 *         in the string b that is not 0 or 1 or b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, actual, len_b, result;

	if (!b)
		return (0);

	result = 0;
	len_b = (_strlen(b) - 1);
	for (i = 0; b[i]; i++)
	{
		if (b[i] == '0')
			actual = 0;
		else if (b[i] == '1')
			actual = 1;
		else
			return (0);
		result = result + actual*_pow_recursion(2, len_b);
		len_b--;
	}

	return (result);
}
/**
 * ----------------------------------
 * ________Functions Definition------
 * ----------------------------------
 */

/**
 * _strlen - returns the length of a string
 * @s: The original string
 *
 * Return: length of s.
 */
int _strlen(const char *s)
{
	int length = 0, i;

	for (i = 0; s[i] != '\0'; i++)
		length = i + 1;

	return (length);
}

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: an int value
 * @y: the power to raise @x
 *
 * Return: If @y is lower than 0, the function should return -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
