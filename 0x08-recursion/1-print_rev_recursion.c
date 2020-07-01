#include "holberton.h"

/**
 * _print_rev_recursion - prints a string in reverse (by recursion)
 * @s: Pointer of the string to compute
 *
 * Return: Void
 */
void _print_rev_recursion(char *s)
{
	char *p;

	p = s;
	if (*s == '\0')
		return;
	s++;
	_print_rev_recursion(s);
	s--;
	if (p != s)
	{
		_putchar(s[0]);
	}
	else
	{
		_putchar(s[0]);
		return;
	}
}
