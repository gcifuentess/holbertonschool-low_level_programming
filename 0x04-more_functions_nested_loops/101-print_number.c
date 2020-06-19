#include "holberton.h"
/**
 * print_number - prints an integer
 * @n: int value to print
 * Return: Void
 */
void print_number(int n)
{
	unsigned int i, module;
	int j;

	j = 0;
	module = 10;
	if (n < 0)
	{
		n = n * (-1);
		_putchar('-');
	}
	for (i = n; i >= 10; i = i / 10)
	{
		module *= 10;
		j++;
	}

	for (j = j; j >= 0; j--)
	{
		_putchar((n % (module) / ((module) / 10)) + '0');
		module /= 10;
	}
}
