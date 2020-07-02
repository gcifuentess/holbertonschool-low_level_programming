#include "holberton.h"
int val_divisibility(int n, int i);

/**
 * is_prime_number - returns 1 if the input integer
 * is a prime number, 0 otherwise r
 * @n: the int number to compute
 * Return: 1 i @n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);
	else if (val_divisibility(n, i) > 1)
		return (0);
	else
		return (1);
}

/**
 * val_divisibility - validates the divisibility of @n by @i
 * @n: the int to be checked
 * @i: the divisor int
 *
 * Return: the number of divisors starting in @i that @n has
 */
int val_divisibility(int n, int i)
{
	if (i == n)
		return (1);
	else if (i < n && n % i == 0)
		return (1 + val_divisibility(n, i + 1));
	else
		return (val_divisibility(n, i + 1));
}
