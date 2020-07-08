#include "holberton.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array.
 * @height: height of the height.
 *
 * Description: -Each element of the grid should be initialized to 0.
 *              -The function should return NULL on failure.
 *		-If width or height is 0 or negative, return NULL.
 *
 * Return: Pointer or NULL
 */
int **alloc_grid(int width, int height)
{
	int **dptr, *ptr;
	int i, j, len = 0;

	if (width < 1 || height < 1)
		return (NULL);

	len = sizeof(int *) * height + sizeof(int) * width * height;
	dptr = (int **)malloc(len);
	ptr = (int *)(dptr + height);

	if (dptr == NULL)
	{
		free(dptr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
		dptr[i] = (ptr + width * i);

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			dptr[i][j] = 0;
	}

	return (dptr);
}
