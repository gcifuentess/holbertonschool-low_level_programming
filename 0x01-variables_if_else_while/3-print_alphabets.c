#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase
 *
 * Return: always 0
 */

int main(void)
{
	int i;
	char l[50];

	for (i = 1; i < 53; i++)
	{
		if (i + 96 <= 122)
		{
			l[i] = i + 96;
			putchar(l[i]);
		}
		else
		{
			l[i] = i + 38;
			putchar(l[i]);
		}
	}
	putchar('\n');
	return (0);
}
