#include "holberton.h"

/**
 * _strcmp - This function compares two strings
 * @s1: The first string to compare
 * @s2: The second string to compare
 * Return: The integer difference between s1 and s2
 */

int _strcmp(char *s1, char *s2)
{
	int i, n;

	/* loop through both strings while s1 is not null */
	for (i = 0; s1[i] != 0; i++)
	{
		/* if s1 char is equal to s2 char, n equal 0 */
		if (s1[i] == s2[i])
			n = 0;
		/* else if s1 char not equal to s2 char, get difference */
		else if (s1[i] != s2[i])
			n = *s1 - *s2;
		/* else continue through the loop */
		else
			continue;
	}

	/* return difference */
	return (n);
}
