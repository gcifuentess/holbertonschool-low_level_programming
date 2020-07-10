#include "holberton.h"

/**
 * _calloc - desc
 * @nmemb: des
 * @size: des
 *
 * Return: des
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (!ptr)
		return (NULL);

	return (ptr);
}
