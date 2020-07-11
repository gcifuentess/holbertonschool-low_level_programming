#include "holberton.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to previous allocated memory.
 * @old_size: is the size, in bytes, of the allocated space for ptr.
 * @new_size: is the new size, in bytes of the new memory block.
 *
 * Description: -The contents will be copied to the newly allocated
 *               space, in the range from the start of ptr up to the
 *               minimum of the old and new sizes.
 *		-If new_size > old_size, the “added” memory should
 *		 not be initialized.
 *		-If new_size == old_size do not do anything and return ptr
 *		_If ptr is NULL, then the call is equivalent to
 *		 malloc(new_size), for all values of old_size and
 *		 new_size.
 *		-If new_size is equal to zero, and ptr is not NULL,
 *		 then the call is equivalent to free(ptr). Return NULL
 *		-free ptr when it makes sense.
 *
 * Return: pointer to the new allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	char *old_ptr, *temp;
	unsigned int i, size;

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (!new_ptr)
			return (NULL);
		else
			return (new_ptr);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);

	if (old_size <= new_size && old_size > 0)
		size = old_size;
	else
		size = new_size;

	new_ptr = malloc(new_size);

	if (!new_ptr)
		return (NULL);

	old_ptr = ptr;
	temp = new_ptr;
	for (i = 0; i < size; i++)
		temp[i] = old_ptr[i];
	free(ptr);

	return (new_ptr);
}
