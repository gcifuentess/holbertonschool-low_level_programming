#include "holberton.h"

/**
 * jack_bauer - every minute of the day, starting from 00:00 to 23:59
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i, j, k, toprint;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			for (k = 1; k <= 2; k++)
			{
				if (k == 1)
					toprint = i / 10;
				else
					toprint = i % 10;
				_putchar('0' + toprint);
			}
			_putchar(':');
			for (k = 1; k <= 2; k++)
			{
				if (k == 1)
					toprint = j / 10;
				else
					toprint = j % 10;
				_putchar('0' + toprint);
			}
		_putchar('\n');
		}
	}
}
