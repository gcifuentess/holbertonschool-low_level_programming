#include "holberton.h"
/**
 * main - Prints Holberton
 *
 * Return: Always 0
 */
int main(void)
{
	int i, j, word;

	i = 1;
	while (i <= 9)
	{
		j = 72;
		while (j <= 122)
		{
			if ((i == 1 && j == 72) || (i == 2 && j == 111))
			{
				word = j;
				i++;
				j = 123;
			}
			else if (i == 3 && j == 108)
			{
				word = j;
				i++;
				j = 123;
			}
			else if ((i == 4 && j == 98) || (i == 5 && j == 101)
				 || (i == 6 && j == 114)
				 || (i == 7 && j == 116))
			{
				word = j;
				i++;
				j = 123;
			}
			else if ((i == 8 && j == 111) || (i == 9 && j == 110))
			{
				word = j;
				i++;
				j = 123;
			}
			j++;
		}
		_putchar(word);
	}
	_putchar('\n');
	return (0);
}
