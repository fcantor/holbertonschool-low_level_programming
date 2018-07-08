#include "holberton.h"

/**
 * _strcmp - This function compares two strings
 * @s1: The first string to compare
 * @s2: The second string to compare
 * Return: The integer difference between s1 and s2
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	/* loop through both strings while s1 & s2 are not null */
	for (i = 0; s1[i] != 0 && s2[i] != 0; i++)
	{
		/* find where characters don't match in strings */
		if ((s1[i] - s2[i]) != 0)
			break;
	}

	/* return difference between those characters */
	return (s1[i] - s2[i]);
}
