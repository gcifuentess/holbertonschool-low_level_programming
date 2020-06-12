#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 *
 * Return: Always 0
 */

int main(void)
{
	int w = 0;
	int k = 0;
	int i = 0;
	int j = 1;

	for (w = 0; w < 10; w++)
	{
		for (; k < 9;)
		{
			for (; i < 10;)
			{
				for (; j < 10;)
				{
					if (w == i && k == j)
						j++;

					putchar('0' + w);
					putchar('0' + k);
					putchar(' ');
					putchar('0' + i);
					putchar('0' + j);

					if (j != 9 || i != 9 || k != 8
					    || w != 9)
					{
						putchar(',');
						putchar(' ');
					}
					j++;
				}
				i++;
				j = 0;
			}
			k++;
			i = 0;
		}
		k = 0;
	}
	putchar('\n');
	return (0);
}
