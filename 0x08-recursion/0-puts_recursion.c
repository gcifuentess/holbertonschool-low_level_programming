#include "holberton.h"

/**
 * _puts_recursion - prints a string, followed by a new line (by recursion)
 * @s: Pointer of the string to print
 *
 * Return:Void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[0]);
	s++;
	_puts_recursion(s);
}
