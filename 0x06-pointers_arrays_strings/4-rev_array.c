#include "holberton.h"

/**
 * reverse_array - unction that reverses the content of an array of integers.
 * @a: the pointer of the array of integers
 * @n: the number of elements to swap
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j = n - 1, temp;

	for (i = 0; i < j; i++)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		j--;
	}
}
