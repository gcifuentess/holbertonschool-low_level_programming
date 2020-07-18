#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void f_print_c(char *separator, va_list valist);
void f_print_i(char *separator, va_list valist);
void f_print_fl(char *separator, va_list valist);
void f_print_s(char *separator, va_list valist);

/**
 * struct formats - format and its function
 * @idformat: format identifier
 * @f_print: function pointer depending on the format
 */
typedef struct formats
{
	char *idformat;
	void (*f_print)(char *separator, va_list valist);
} formats_t;


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS_H */
