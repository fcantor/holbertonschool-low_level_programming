#include "holberton.h"
#include <stdio.h>

/**
 * _strspn - This function gets the length of a prefix substring
 * @s: The string to search through
 * @accept: The string to search from
 * Return: The number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, matches;

	/* loop through the s array */
	for (i = 0; s[i] != '\0'; i++)
	{
		/* break out of this loop once matches has value */
		if (matches != i)
			break;

		/* loop through the accept array */
		for (j = 0; accept[j] != '\0'; j++)
		{
			/* if characters match */
			if (s[i] == accept[j])
			{
				/* count it */
				matches++;
				/* then break out of accept array */
				break;
			}
		}
	}
	return (matches);
}
