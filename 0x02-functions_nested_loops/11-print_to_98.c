#include "holberton.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the int number where the function begins.
 *
 * Return: Always void.
 */
void print_to_98(int n)
{
	int i = n, j, module, nprint, flag = 0;

	while (flag != 1)
	{
		if (i == 98 && flag == 0)
			flag = 1;
		nprint = i;
		if (i < 0)
		{
			_putchar('-');
			nprint  = i * (-1);
		}
		module = 10;
		for (j = nprint; j >= 10; j = j / 10)
			module *= 10;
		for (j = module; j >= 10; j = j / 10)
			_putchar((nprint % j) / (j / 10) + '0');
		if (i != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		if (i < 98)
			i++;
		else if (i > 98)
			i--;
	}
	_putchar('\n');
}
