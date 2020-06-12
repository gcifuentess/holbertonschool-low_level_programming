#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: Always 0
 */

int main(void)
{
	int i = 0;
	int j = 1;
	int c = 1;

	for (i = 0; i < 10; i++)
	{
		for (; j < 10;)
		{
			putchar('0' + i);
			putchar('0' + j);
			if (j != 9 || i != 8)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		c++;
		j = c;
	}
	putchar('\n');
	return (0);
}
