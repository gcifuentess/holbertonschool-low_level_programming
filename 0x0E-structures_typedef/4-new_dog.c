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

	new.name = name;
	new.age = age;
	new.owner = owner;

	ptr = &new;

	return (ptr);
}
