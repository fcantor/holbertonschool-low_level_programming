#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - This function creates an array of chars, and initializes
 * it with a specific char
 * @size: The size of the buffer
 * @c: The char to initialize the buffer with
 * Return: A pointer to the array, otherwise NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	/* checker for size */
	if (size == 0)
		return (NULL);

	/* create an array with size of char size */
	s = malloc(size * sizeof(char));

	/* if it fails, return NULL */
	if (s == NULL)
		return (NULL);

	/* initialize every element in array with c */
	for (i = 0; i < size; i++)
		s[i] = c;

	/* return pointer to array */
	return (s);
}
