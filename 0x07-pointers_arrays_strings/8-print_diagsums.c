#include "holberton.h"

/**
 * print_diagsums - prints the sum of the two diagonals of
 * a square matrix of integers
 * @a: Pointer of the matrix
 * @size: Size of one of the sides of the matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, diag1 = 0, diag2 = 0;

	for (i = 0; i < size; i++)
	{
		diag1 = diag1 + a[i * (size + 1)];
		/*printf("diag1: %d; i: %d\n", diag1, i);*/
		diag2 = diag2 + a[i * (size + 1) + (size - 1) - i * 2];
	}
	printf("%d, %d\n", diag1, diag2);
}
