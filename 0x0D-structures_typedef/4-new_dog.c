#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * *_strcpy - This function duplicates strings
 * @s: The string to copy
 * Return: The string copy
 */

char *_strdup (const char *s)
{
	int i, j;
	char *d = NULL;

	/* find length of s */
	for (i = 0; s[i] != '\0'; i++)
		;
	/* allocate space for length and null */
	d = malloc (i + 1);

	/* if malloc fails, return NULL */
	if (d == NULL)
		return (NULL);

	/* copy the characters into a separate string */
	for (j = 0; s[j] != '\0'; j++)
		d[j] = s[j];

	d[j] = '\0';

	/* return the new string */
	return (d);
}


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
	dog_t *puppo = malloc(sizeof(dog_t));

	/* if malloc fails, return NULL */
	if (puppo == NULL)
		return (NULL);

	/* if name or owner arguments passed are NULL, return NULL */
	if (name == NULL || owner == NULL)
		return (NULL);

	/* initialize values of new struct */
	puppo->name = _strdup(name);
	puppo->age = age;
	puppo->owner = _strdup(owner);

	/* return pointer to new struct puppo */
	return (puppo);
}
