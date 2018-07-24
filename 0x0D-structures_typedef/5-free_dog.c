#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - This function frees dogs
 * @d: The pointer to an instance of struct dog
 */

void free_dog(dog_t *d)
{
	/* check to see if pointer is null */
	if (d != NULL)
	{
		/* free all pointers used */
		free(d->name);
		free(d->owner);
		free(d);
	}
}
