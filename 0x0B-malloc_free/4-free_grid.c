#include "holberton.h"

/**
 * free_grid - desc
 * @grid: desc
 * @heigth: desc
 *
 * Return: desc
 */
void free_grid(int **grid, int height)
{
	int a;

	a = height;

	free(grid);
	printf("%d\n", a);
}
