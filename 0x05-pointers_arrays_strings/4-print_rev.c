#include "holberton.h"
/**
 * print_rev - prints a string, in reverse
 * @s: The string to print
 *
 * Return: void.
 */
void print_rev(char *s)
{
	int i, count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	count--;
	for (i = count; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
