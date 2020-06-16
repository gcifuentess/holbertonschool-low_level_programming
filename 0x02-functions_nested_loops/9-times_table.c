#include "holberton.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, k, toprint;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 1; k <= 2; k++)
			{
				toprint = i * j;
				if (k == 1)
				{
					if (toprint >= 10)
						toprint = toprint / 10;
					else
						toprint = -16;
					if (j > 0)
						_putchar('0' + toprint);
				}
				else
				{
					toprint = toprint % 10;
					_putchar('0' + toprint);
					break;
				}
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
