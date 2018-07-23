#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - This function initializes a variable of type struct dog
 * @d: A pointer to the struct dog
 * @name: A pointer to the element name in struct dog
 * @age: A pointer to the element age in struct dog
 * @owner: A pointer to the element owner in struct dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* if pointer is NULL, don't do anything */
	if (d == NULL)
		;
	/* else initialize struct dog with passed values */
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
