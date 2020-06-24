#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 *
 * Specs: where n is the number of elements of the array to be printed
 * Numbers must be separated by comma, followed by a space
 * The numbers should be displayed in the same order as they
 * are stored in the array
 * @a: The intput array
 * @n: int number of components of the array to print
 *
 * Return: void.
 */
void print_array(int *a, int n)
{
	int i, count;

	count = 0;
	for (i = 0; a[i] != '\0'; i++)
		count++;
	count--;

	/**
	 * if (n > count)
	 * n = count;
	*/

	for (i = 0; i < n; i++)
	{
		printf("%i", a[i]);
		if (i != n - 1)
			printf(", ");
		else
			printf("\n");
	}
}
