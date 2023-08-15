#include "dog.h"

/**
 * init_dog - initialize the struct
 * @name: name of dog
 * @d: pointer to a dog
 * @age: age of the dog
 * @owner: dog owner
 * Return: 0 success
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
