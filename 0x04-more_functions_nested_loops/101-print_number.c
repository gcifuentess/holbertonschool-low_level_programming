#include "holberton.h"
/**
 * print_number - prints an integer
 * @n: int value to print
 * Return: Void
 */
void print_number(int n)
{
	unsigned int i, module, nprint = n;
	int j;

	j = 0;
	module = 10;
	if (n < 0)
	{
		nprint = nprint * (-1);
		_putchar('-');
	}
	for (i = nprint; i >= 10; i = i / 10)
	{
		module *= 10;
		j++;
	}

	for (j = j; j >= 0; j--)
	{
		_putchar((nprint % (module) / ((module) / 10)) + '0');
		module /= 10;
	}
}
