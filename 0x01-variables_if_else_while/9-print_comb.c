#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: Always 0
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		if (n != 9)
		{
			putchar('0' + n);
			putchar(',');
		}
		else
		{
			putchar('0' + n);
		}
	}

	putchar('\n');
	return (0);
}
