#include "holberton.h"

/**
 * alloc_grid - desc
 * @width: desc
 * @height: desc
 * Return: return
 */
int **alloc_grid(int width, int height)
{
	int **dptr;

	dptr = malloc(4);

	if (width < 1 || height < 1)
		return (NULL);

	if (dptr == NULL)
		return (NULL);

	return (dptr);
}
