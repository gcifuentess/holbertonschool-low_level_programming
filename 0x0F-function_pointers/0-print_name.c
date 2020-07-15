#include "function_pointers.h"

/**
 * print_name - prints a name in different ways
 * @name: pointer of the name to print
 * @f: pointer to the function that prints the name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
