#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs
 * @d: pointer of structure
 * Return 1 on success
 */

void free_dog(dog_t *d)
{
	if (d != 0)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
