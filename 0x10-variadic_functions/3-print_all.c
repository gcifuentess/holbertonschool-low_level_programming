#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: the format string
 *
 * Important: Helper functions in this file after main function.
 *
 * Return: Void
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	formats_t act_format;
	char *act_id_format, *separator = "";
	unsigned int i = 0, j = 0;

	formats_t my_format[] = {
			{"c", f_print_c},
			{"i", f_print_i},
			{"f", f_print_fl},
			{"s", f_print_s},
			{NULL, NULL}
		};
	va_start(valist, format);

	while (format && format[i])
	{
		act_format = my_format[0];
		act_id_format = act_format.idformat;
		j = 0;
		while (act_id_format)
		{
			if (format[i] == act_id_format[0])
			{
				act_format.f_print(separator, valist);
				separator = ", ";
				break;
			}
			act_format = my_format[j++];
			act_id_format = act_format.idformat;
		}
		i++;
	}
	va_end(valist);
	printf("\n");
}

/**
 * f_print_c - prints the next item of @valist in char format
 * @separator: the pointer string of the desired separator.
 * @valist: is the list generated by a variadic function.
 *
 * Return: Void.
 */
void f_print_c(char *separator, va_list valist)
{
	printf("%s%c", separator, va_arg(valist, int));
}

/**
 * f_print_i - prints the next item of @valist in int format
 * @separator: the pointer string of the desired separator.
 * @valist: is the list generated by a variadic function.
 *
 * Return: Void.
 */
void f_print_i(char *separator, va_list valist)
{
	printf("%s%d", separator, va_arg(valist, int));
}

/**
 * f_print_fl - prints the next item of @valist in float format
 * @separator: the pointer string of the desired separator.
 * @valist: is the list generated by a variadic function.
 *
 * Return: Void.
 */
void f_print_fl(char *separator, va_list valist)
{
	printf("%s%f", separator, va_arg(valist, double));
}

/**
 * f_print_s - prints the next item of @valist in string format
 * @separator: the pointer string of the desired separator.
 * @valist: is the list generated by a variadic function.
 *
 * Return: Void.
 */
void f_print_s(char *separator, va_list valist)
{
	char *s;

	s = va_arg(valist, char *);
	if (s)
	{
		printf("%s%s", separator, s);
		return;
	}

	printf("%s%s", separator, "(nil)");
}
