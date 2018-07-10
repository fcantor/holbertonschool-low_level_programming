#include "holberton.h"

/**
 * *_strchr - This function locates a character in a string
 * @s: The string to search through
 * @c: The character to find
 * Return: A pointer to the first occurence of c; otherwise, NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return (0);
}
