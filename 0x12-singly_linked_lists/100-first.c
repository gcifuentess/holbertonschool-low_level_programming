#include <stdio.h>
void __attribute__((constructor)) calledFirst();

/**
 * calledFirst - function that is called before main
 *
 * Return: Void
 */
void calledFirst(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
