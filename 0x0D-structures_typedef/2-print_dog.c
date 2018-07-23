#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - This function prints a struct dog
 * @d: A pointer to the struct dog
 */

void print_dog(struct dog *d)
{
	/* if the pointer is NULL, don't do anything */
	if (d == NULL)
		return;

	/* if an element of d is NULL, print nil. else, print element */
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	/* print age regardless since integer value can't be null */
	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);

}
