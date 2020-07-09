#include "holberton.h"

/**
 * free_grid - Frees a 2 dimensional grid created by alloc_grid function.
 * @grid: The previous grid created.
 * @height: The hight of the grid (unused).
 *
 * Return: void
 */
void free_grid(int **grid, int height __attribute__((unused)))
{
	free((int *)grid);
}
