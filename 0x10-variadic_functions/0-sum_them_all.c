#include "variadic_functions.h"

/**
 * sum_them_all - sum of all its parameters (variadic function).
 * @n: the dinamic number of parameters.
 * @...: variadic arguments
 *
 * Return: Summ of all of the given parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int sum, i;

	sum = 0;
	va_start(valist, n);

	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);

	va_end(valist);

	return (sum);
}
