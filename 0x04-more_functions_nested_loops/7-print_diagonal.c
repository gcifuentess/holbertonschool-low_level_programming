#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: lengh of the line to be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j < i; j++)
			_putchar(' ');
		_putchar(92);
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
