#include "holberton.h"

/**
 * _realloc - des
 * @ptr: des
 * @old_size: des
 * @new_size: des
 *
 * Return: des
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *old_p;
	unsigned int i;

	old_p = ptr;
	if (!ptr)
		new_ptr = malloc(new_size);

	if (!new_ptr)
		return (NULL);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(new_size);
	if (!new_ptr)
		return (NULL);

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			new_ptr[i] = old_p[i];
		free(ptr);
	}
	else
	{
		for (i = 0; i < new_size; i++)
			new_ptr[i] = old_p[i];
		free(ptr);
	}

	return (ptr);
}
