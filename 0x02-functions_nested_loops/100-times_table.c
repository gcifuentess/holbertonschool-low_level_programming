#include "holberton.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: int value for  n times
 * Return: Void
 */
void print_times_table(int n)
{
	int i, j;

	for (i = 0; i <= n && n >= 0 && n <= 15; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (i * j >= 100)
			{
				_putchar('0' + i * j / 100);
				_putchar('0' + i * j / 10
					 -  i * j / 100 * 10);
				_putchar('0' + i * j % 10);
			}
			else if (i * j >= 10)
			{
				_putchar('0' - 16);
				_putchar('0' + i * j / 10);
				_putchar('0' + i * j % 10);
			}
			else
			{
				if (j > 0)
				{
					_putchar('0' - 16);
					_putchar('0' - 16);
				}
				_putchar('0' + i * j % 10);
			} /*-16 to have the space char*/
			if (j < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
