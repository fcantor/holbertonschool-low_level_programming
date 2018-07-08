#include "holberton.h"

/**
 * _strcmp - This function compares two strings
 * @s1: The first string to compare
 * @s2: The second string to compare
 * Return: The integer difference between s1 and s2
 */

int _strcmp(char *s1, char *s2)
{
	char *ch;
	int i, n;

	/* loop through both strings */
	for (ch = s1; *ch; ++ch)
	{
		if (s1 == s2)
			n = 0;
		else if (*s1 != *s2)
			n = s1 - s2;
		else
			continue;
	}

	/* return difference */
	return (n);
}
