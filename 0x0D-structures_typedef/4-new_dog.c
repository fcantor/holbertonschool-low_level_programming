#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - This function creates an instance of the struct dog
 * @name: A char pointer to an element string called name
 * @age: A float value called age
 * @owner: A char pointer to an element string called owner
 * Return: A pointer to the instance new_dog, else NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	/* creating an instance of type dog_t struct called puppo */
	dog_t *puppo = malloc(sizeof(struct dog));

	/* if malloc fails, return NULL */
	if (puppo == NULL)
		return (NULL);

	/* initialize values of new struct to passed values */
	puppo->name = name;
	puppo->age = age;
	puppo->owner = owner;

	/* return pointer to new struct puppo */
	return (puppo);
}
