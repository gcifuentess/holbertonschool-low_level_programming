#include "holberton.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: The pointer of the pointer to set
 * @to: The target pointer
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
