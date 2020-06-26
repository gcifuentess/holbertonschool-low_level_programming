#include "holberton.h"

/**
 * print_number - prints an integer
 * @n: the int number to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int i, module, nprint;

	if (n < 0)
	{
		_putchar('-');
		nprint  = n * (-1);
	}
	else
	{
		nprint = n;
	}
	module = 10;
	for (i = nprint; i >= 10; i = i / 10)
		module *= 10;
	for (i = module; i >= 10; i = i / 10)
		_putchar((nprint % i) / (i / 10) + '0');

}
