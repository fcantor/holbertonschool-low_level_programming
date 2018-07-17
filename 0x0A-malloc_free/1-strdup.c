#include "holberton.h"
#include <stdlib.h>

/**
 * _strlen - This function returns the length of a string
 * @s: Variable that contains a character array to be counted
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		continue;

	return (i);
}


/**
 * _strdup - This function returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter
 * @str: The string to copy
 * Return: A pointer to the newly allocated space, NULL if it fails
 */

char *_strdup(char *str)
{
	char *copy;
	unsigned int i;

	/* if str is NULL, return NULL */
	if (str == NULL)
		return (NULL);

	/* allocate enough memory for copy */
	copy = malloc(_strlen(str));

	/* if malloc fails, return NULL */
	if (copy == NULL)
		return (NULL);

	/* copy string inside str to copy */
	for (i = 0; str[i] != '\0'; i++)
		copy[i] = str[i];

	/* append null terminator to copy */
	copy[i] = '\0';

	return (copy);
}
