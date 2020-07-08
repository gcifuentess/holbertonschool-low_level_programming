#include "holberton.h"

/**
 * alloc_grid - desc
 * @width: desc
 * @height: desc
 * Return: return
 */
int **alloc_grid(int width, int height)
{
	int **dptr, i, j;
	int matrix[2][2];

	dptr = malloc(4);

	if (width < 1 || height < 1)
		return (NULL);

	if (dptr == NULL)
		return (NULL);

	for (i = 0; 0; i++)
	{
		for (j = 0; 0; j++)
			matrix[i][j] = 0;
	}
	return (dptr);
}
