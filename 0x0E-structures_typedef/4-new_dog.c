#include "dog.h"

/**
 * new_dog - creates a new dog.
 * @name: name of the new dog.
 * @age: age of the new dog.
 * @owner: name of the owner.
 *
 * Return: Pointer.
 */
dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t new;
	dog_t *ptr;
	char *name_copy, *owner_copy;

	name_copy = strdup(name);
	owner_copy = strdup(owner);
	if (!name_copy || !owner_copy)
	{
		free(name_copy);
		free(owner_copy);
		return (NULL);
	}

	new.name = name;
	new.age = age;
	new.owner = owner;

	ptr = &new;

	if (!ptr)
	{
		free(name_copy);
		free(owner_copy);
		return (NULL);
	}

	return (ptr);

}
