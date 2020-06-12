#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 *
 * Return: Always 0
 */

int main(void)
{
	int i = 1;
	int j = 2;
	int k = 0;
	int cj = 2;
	int ci = 1;
	int c2j = 2;

	for (k = 0; k < 10; k++)
	{
		for (; i < 10;)
		{
			for (; j < 10;)
			{
				putchar('0' + k);
				putchar('0' + i);
				putchar('0' + j);
				if (j != 9 || i != 8 || k != 7)
				{
					putchar(',');
					putchar(' ');
				}
				j++;
			}
			cj++;
			j = cj;
			i++;
		}
		ci++;
		i = ci;
		c2j++;
		j = c2j;
		cj = c2j;
	}
	putchar('\n');
	return (0);
}
