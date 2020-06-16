#include "holberton.h"

/**
 * print_sign - prints the sign of a number
 * @n: int value to check
 *
 * Return: 1 and prints + if n is greater than zero,
 * 0 and prints 0 if n is zero, -1 and prints - if n is less than zero.
 */
int print_sign(int n)
{
	int r;

	if (n > 0)
	{
		_putchar('+');
		r = 1;
	}
	else if (n < 0)
	{
		_putchar('-');
		r = -1;
	}
	else
	{
		_putchar('0');
		r = 0;
	}
	return (r);
}
