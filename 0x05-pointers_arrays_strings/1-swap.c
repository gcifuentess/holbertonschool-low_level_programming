#include "holberton.h"
/**
 * swap_int - swaps the values of two integers
 * @a: The pointer for the first number
 * @b: The pointer for the second number
 *
 * Return: void.
 */
void swap_int(int *a, int *b);
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
