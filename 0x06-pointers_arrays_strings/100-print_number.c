#include "holberton.h"

/**
 * print_number - prints an integer
 * @n: the int number to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	int nprint;

	if (n < 0)
	{
		_putchar('-');
		nprint  = n * (-1);
	}
	else
	{
		nprint = n;
	}
	if (nprint / 10 > 0)
		print_number(nprint / 10);
	_putchar('0' + nprint % 10);
}
