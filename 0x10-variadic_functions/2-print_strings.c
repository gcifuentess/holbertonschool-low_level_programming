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
	char *act_valist;
	unsigned int i;

	if (!n)
	{
		printf("\n");
		return;
	}

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		act_valist = va_arg(valist, char *);
		if (separator)
			printf("%s%s", act_valist, separator);
		else if (!act_valist)
		{
			printf("(nil)");
		}
		else
			printf("%s", act_valist);
	}
	printf("\n");
	va_end(valist);
}
