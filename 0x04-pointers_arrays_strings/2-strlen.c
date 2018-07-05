#include "holberton.h"

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
