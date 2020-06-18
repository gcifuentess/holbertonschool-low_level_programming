#include "holberton.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * If n is greater than 15 or less than 0 the function
 * should not print anything
 * @n: int value for  n times
 * Return: Void
 */
void print_times_table(int n)
{
	int i, j, toprint;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				toprint = i * j;
				if (toprint >= 100)
				{
					_putchar('0' + toprint / 100);
					_putchar('0' + toprint / 10
						 - toprint / 100 * 10);
					_putchar('0' + toprint % 10);
				}
				else if (toprint >= 10)
				{
					_putchar('0' - 16);
					_putchar('0' + toprint / 10);
					_putchar('0' + toprint % 10);
				}
				else
				{
					if (j > 0)
					{
						_putchar('0' - 16);
						_putchar('0' - 16);
					}
					_putchar('0' + toprint % 10);
				}
				/*-16 to have the space char*/
				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
