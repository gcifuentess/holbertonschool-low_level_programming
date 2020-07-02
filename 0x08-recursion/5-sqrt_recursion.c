#include "holberton.h"
int _sqrt_recursion_val(int n, int sqrt_v);

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the int to compute
 *
 * Return: If n does not have a natural square root,
 * the function should return -1
 */
int _sqrt_recursion(int n)
{
	int sqrt_v = 0;

	if (n < 0)
		return (-1);
	return (_sqrt_recursion_val(n, sqrt_v));
}

/**
 * _sqrt_recursion_val - validates if the square of @sqrt_v is equal to @n
 * @n: the int objetive - comes from _sqrt_recursion()
 * @sqrt_v: the int whose square is going to be evaluated
 *
 * Return: @sqrt_v if its square is equal to @n
 */
int _sqrt_recursion_val(int n, int sqrt_v)
{
	if (sqrt_v * sqrt_v < n)
		return (_sqrt_recursion_val(n, sqrt_v + 1));
	else if (sqrt_v * sqrt_v == n)
		return (sqrt_v);
	else
		return (-1);
}
