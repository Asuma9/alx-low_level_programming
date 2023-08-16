#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees the dog
 * @d: pointer to dog
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return; /* Already free */

	/* Free name and owner dynamically*/
	free(d->name);
	free(d->owner);

	/* Free the dog struct */
	free(d);
}
