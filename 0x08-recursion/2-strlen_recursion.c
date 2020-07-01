#include "holberton.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: Pointer to the string to compute
 *
 * Return: int with the length of @s
 */
int _strlen_recursion(char *s)
{
	unsigned int length = 0;

	if (*s == '\0')
		return (0);
	length++;
	s++;
	return (length + _strlen_recursion(s));
}
