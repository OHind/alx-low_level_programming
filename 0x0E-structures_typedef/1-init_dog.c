#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Initialize a dog
 * @d: The dog
 * @name: the name of the dog
 * @age: The age of teh dog
 * @owner: The owner of the dog
 * Return: the structure
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
