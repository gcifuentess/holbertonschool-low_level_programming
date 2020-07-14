#include "dog.h"

/**
 * free_dog - frees new_dog()
 * @d: pointer of new_dog()
 *
 * Return: void.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
