#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - a pointer to an allocated space
 * @c: string
 * Return: pointer
 */

char *_strdup(char *c)
{
	int l, i;
	char *ar;

	if (c == NULL)
	{
		return (NULL);
	}

	l = 0;
	while (*(c + l) != '\0')
	{
		l++;
	}

	ar = (char *) malloc(l * sizeof(char) + 1);
	if (ar == NULL)
		return (NULL);

	for (i = 0; i < l; i++)
	{
		ar[i] = c[i];
	}
	ar[i] = '\0';

	return (ar);
}
/**
 * new_dog - New dog using dog_t
 * @name: name of the dog
 * @age: age of the dog
 * @owner: Owner of the dog
 * Return: a struct dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *d_name, *d_owner;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d_name = _strdup(name);
	if (d_name == NULL)
	{
		free(d);
		return (NULL);
	}
	d_owner = _strdup(owner);
	if (d_owner == NULL)
	{
		free(d);
		free(d_name);
		return (NULL);
	}
	d->name = d_name;
	d->age = age;
	d->owner = d_owner;
	return (d);


}
