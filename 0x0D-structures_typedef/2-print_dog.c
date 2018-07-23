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
		;
	/* if an element of d is NULL, print (nil) */
	else if (d->name == NULL || d->age == 0 || d->owner == NULL)
		printf("(nil)");
	/* otherwise, print all elements in the struct */
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}

}
