#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - data structure for a dog.
 * @name: name of the dog.
 * @owner: name of the owner of the dog.
 * @age: age of the dog.
 *
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif/*DOG_H*/

