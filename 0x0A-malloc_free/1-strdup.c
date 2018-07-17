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
	int i;

	/* check for if string is NULL */
	if (str == NULL)
		return (NULL);

	copy = malloc(sizeof(str));
	for (i = 0; str[i] != '\0'; i++)
		copy[i] = str[i];

	/* if string is empty, return null */
	if (i == 0)
		return (NULL);

	return (copy);
}
