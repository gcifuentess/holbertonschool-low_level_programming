#include "holberton.h"

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of elements of the array.
 * @size: size in bytes of each element of the array.
 *
 * Description: -The _calloc function allocates memory for an array
 *               of nmemb elements of size bytes each and returns a
 *		 pointer to the allocated memory.
 *		-The memory is set to zero.
 *		-If nmemb or size is 0, then _calloc returns NULL.
 *		-If malloc fails, then _calloc returns NULL
 *
 * Return: pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	int *tmp_ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (!ptr)
		return (NULL);

	tmp_ptr = (int *)ptr;

	for (i = 0; i < (nmemb / 4); i++)
		tmp_ptr[i] = 0;

	return (ptr);
}
