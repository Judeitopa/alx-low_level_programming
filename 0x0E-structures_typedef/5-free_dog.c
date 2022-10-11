#include <stdlib.>
#include "dog.h"

/**
 * free_dog - fress dog
 * @d: pointer to do to free
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d)
	}
}
