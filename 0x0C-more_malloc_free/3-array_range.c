#include "holberton.h"

/**
 * array_range - des
 * @min: des
 * @max: des
 *
 * Return: des
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, num;

	num = min;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));

	if (!ptr)
		return (NULL);

	for (i = 0; i <= (max - min); i++, num++)
		ptr[i] = num;

	return (ptr);
}
