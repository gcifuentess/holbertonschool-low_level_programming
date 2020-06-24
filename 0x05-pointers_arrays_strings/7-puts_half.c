#include "holberton.h"
/**
 * puts_half - prints half of a string,
 *
 * Specs: The function should print the second half of the string
 * If the number of characters is odd, the function should
 * print the last n characters of the string,
 * where n = (length_of_the_string - 1) / 2
 * @str: The string to compute
 *
 * Return: void.
 */
void puts_half(char *str)
{
	int i, len, count;

	count = 0;
	for (i = 0; str[i] != '\0'; i++)
		count++;
	count--;
/*	_putchar(str[count]);*/

	len = count;
	if (len % 2 == 0)
		len = len / 2;
	else
		len = (len - 1) / 2;

	for (i = count + 1 - len; i <= count; i++)
		_putchar(str[i]);

	_putchar('\n');
}
