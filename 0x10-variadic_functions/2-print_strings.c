#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: is the string to be printed between the strings.
 * @n:  is the number of strings passed to the function.
 *
 * Return: Void
 */
void print_strings(const char *separator, const unsigned int n, ...)
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
		if (i < n - 1 && separator)
			printf("%s%s", va_arg(valist, char *), separator);
		else if (i < n - 1 && !separator)
			printf("%s%s", va_arg(valist, char *), "(nil)");
		else
			printf("%s\n", va_arg(valist, char *));
	}

	va_end(valist);
}
