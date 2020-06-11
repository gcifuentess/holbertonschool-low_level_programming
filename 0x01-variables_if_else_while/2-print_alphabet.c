#include <stdio.h>

/**
 * main - prints the alphabet in lowercase using putchar()
 *
 * Return: always 0
 */

int main(void)
{
	int i;
	char l[25];

	for (i = 1; i <= 26; i++)
	{
		l[i] = i + 96;
		putchar(l[i]);
	}
	putchar('\n');
	return (0);
}
