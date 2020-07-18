#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: is the string to be printed between numbers.
 * @n: is the number of integers passed to the function.
 *
 * Return: Void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	if (!n)
	{
		printf("\n");
		return;
	}

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
		{
			if (separator)
				printf("%d%s",
				       va_arg(valist, int), separator);
			else
				printf("%d", va_arg(valist, int));
		}
		else
		{
			printf("%d\n", va_arg(valist, int));
		}
	}

	va_end(valist);
}
