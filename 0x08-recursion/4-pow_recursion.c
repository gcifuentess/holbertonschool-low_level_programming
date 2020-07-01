#include "holberton.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: an int value
 * @y: the power to raise @x
 *
 * Return: If @y is lower than 0, the function should return -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
