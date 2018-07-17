#include "holberton.h"
#include <stdlib.h>

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
	copy = malloc(sizeof(str));

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
