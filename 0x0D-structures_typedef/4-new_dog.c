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
	dog_t *new_dog = malloc(sizeof(struct dog));

	/* if malloc fails, return NULL */
	if (new_dog == NULL)
		return (NULL);

	/* initialize values of new struct to passed values */
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

	/* return pointer to new struct puppo */
	return (new_dog);
}
