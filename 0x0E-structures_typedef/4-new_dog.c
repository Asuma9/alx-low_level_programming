#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *new_dog - creates a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 * Return: NULL (fails)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	/* Allocating storage memory */
	dog_t *new_dog_ptr;

	new_dog_ptr = (dog_t *)malloc(sizeof(dog_t));
	if (new_dog_ptr == NULL)  /* incase it fails */
		return (NULL);

	/*Allocating memory for dog name and copying */
	new_dog_ptr->name = strdup(name);
	if (new_dog_ptr->name == NULL)
	{
		free(new_dog_ptr);
		return (NULL);
	}

	/*Allocating memory for owner and making a copy*/
	new_dog_ptr->owner = strdup(owner);
	if (new_dog_ptr->name == NULL)
	{
		free(new_dog_ptr->name);
		free(new_dog_ptr);
		return (NULL);
	}

	/* Assign age */
	new_dog_ptr->age = age;

	return (new_dog_ptr);
}
