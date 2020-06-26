#include "holberton.h"

/**
 * print_number - prints an integer
 *
 * Return: void
 */
void print_number(int n)
{
	int i, module, nprint;

	nprint = n;
	if (n < 0)
	{
		_putchar('-');
		nprint  = n * (-1);
	}
	module = 10;
	for (i = nprint; i >= 10; i = i / 10)
		module *= 10;
	for (i = module; i >= 10; i = i / 10)
		_putchar((nprint % i) / (i / 10) + '0');

}
