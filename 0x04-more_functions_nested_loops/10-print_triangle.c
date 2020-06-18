#include "holberton.h"

/**
 * print_triangle - prints a triangle
 * @size: length of the triangle to be printed
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;

	for (i = size; i >= 1; i--)
	{
		for (j = 0; j < i - 1; j++)
			_putchar(' ');
		for (j = i - 1; j < size; j++)
			_putchar(35);
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
