#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 *
 * Return: Always 0
 */

int main(void)
{
	int i;
	char l[25];

	for (i = 1; i <= 26; i++)
	{
		l[i] = 123 - i;
		putchar(l[i]);
	}

	putchar('\n');
	return (0);
}
