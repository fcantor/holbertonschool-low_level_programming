#include "holberton.h"

/**
 * *_strpbrk - This function searches a string for any of a set of bytes
 * @s: The string to search through
 * @accept: The string to search for in s
 * Return: A pointer to the byte in s that matches one of the bytes in accept;
 * Otherwise, a NULL if no byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}

	return (0);
}
