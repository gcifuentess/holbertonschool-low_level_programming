#include "dog.h"

/**
 * print_dog -  prints a struct dog
 * @d: struct
 *
 * Return: Void
 */
void print_dog(struct dog *d)
{
	char *name_null, *owner_null;

	name_null = "(nil)";
	owner_null = "(nil)";

	if (d)
	{
		if (d->name && d->age && d->owner)
			printf("Name: %s\nAge: %f\nOwner: %s\n",
			       d->name, d->age, d->owner);
		else if (d->age && d->owner)
			printf("Name: %s\nAge: %f\nOwner: %s\n",
			       name_null, d->age, d->owner);
		else if (d->name && d->age)
			printf("Name: %s\nAge: %f\nOwner: %s\n",
			       d->name, d->age, owner_null);
		else
			printf("Name: %s\nAge: %f\nOwner: %s\n",
			       name_null, d->age, owner_null);
	}
}
