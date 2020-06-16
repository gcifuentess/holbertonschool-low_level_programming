#include "holberton.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: int value to check
 *
 * Return: the absolute value of n.
 */
int _abs(int n)
{
	int r;

	if (n > 0)
		r = n;
	else if (n < 0)
		r = -1 * n;
	else
		r = 0;
	return (r);
}
