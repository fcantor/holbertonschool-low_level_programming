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
		/* if there are matches, and at the end of accept array */
		if (matches > 0 && accept[j] == '\0')
			/* return the counted matches */
			return (matches);
	}
	return (matches);
}
