#include "dog.h"

/**
 * new_dog - creates a new dog.
 * @name: name of the new dog.
 * @age: age of the new dog.
 * @owner: name of the owner.
 *
 * Description: -You have to store a copy of name and owner
 *              -Return NULL if the function fails
 *
 * Return: Pointer.
 */
dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *ptr;
	char *name_copy, *owner_copy;

	name_copy = _strdup(name);
	if (!name_copy)
		return (NULL);
	owner_copy = _strdup(owner);
	if (!owner_copy)
	{
		free(name_copy);
		return (NULL);
	}

	ptr = malloc(sizeof(dog_t));
	if (!ptr)
	{
		free(name_copy);
		free(owner_copy);
		return (NULL);
	}

	ptr->name = name_copy;
	ptr->age = age;
	ptr->owner = owner_copy;

	return (ptr);
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *    which contains a copy of the string given as a parameter.
 * @str: the string to be copied.
 *
 * Description: -Returns a pointer to a new string which is a duplicate
 *               of the string str. Memory for the new string is obtained
 *               with malloc, and can be freed with free.
 *              -Returns NULL if str = NULL.
 *
 * Return: On success, the _strdup function returns a pointer to the
 *         duplicated string. It returns NULL if insufficient memory
 *         was available
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	i++;

	ptr = malloc(sizeof(char) * i);

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (j = 0; j < i; j++)
	{
		ptr[j] = str[j];
	}

	return (ptr);
}

