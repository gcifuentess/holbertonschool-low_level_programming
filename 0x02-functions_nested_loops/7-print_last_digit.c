#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: int value to extract last digit from
 *
 * Return: last digit of n.
 */
int print_last_digit(int n)
{
	int r;

	r = n % 10;
	if (r < 0)
		r = -1 * r;
	_putchar('0' + r);
	return (r);
}
