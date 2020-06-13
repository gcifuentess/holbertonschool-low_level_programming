#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 *
 * Return: Always 0
 */

int main(void)
{
	int n = 0;
	int n2 = 0;

	while (n <= 98)
	{
		n2 = n + 1;
		while (n2 <= 99)
		{
			putchar('0' + n / 10);
			putchar('0' + n % 10);
			putchar(' ');
			putchar('0' + n2 / 10);
			putchar('0' + n2 % 10);

			if (n == 98 && n2 == 99)
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
			n2++;
		}
		n++;
	}
	return (0);
}
