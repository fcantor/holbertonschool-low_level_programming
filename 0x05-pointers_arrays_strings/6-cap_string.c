#include "holberton.h"
#include <stdio.h>

/**
 * *cap_string - This function capitalizes all words of a string
 * @s: The string to evaluate
 * Return: The converted string
 */

char *cap_string(char *s)
{
	int i, j, placement;
	char separators[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(',
			     ')', '{', '}'};

	/* loop throuth the string and evaluate each character */
	for (i = 0; s[i] != '\0'; i++)
	{
		/* loop through the separators for a match with s[i] */
		for (j = 0; separators[j] != '\0'; j++)
		{
			/* if s[i] matches a separator */
			while (separators[j] == s[i])
			{
				/* move onto the next element and evaluate */
				i++;
				/* if the next element is a lowercase char */
				if (s[i] >= 'a' && s[i] <= 'z')
				{
					/* convert to uppercase */
					placement = 26 - ('z' - s[i]);
					s[i] = placement + 64;
				}
				else
					continue;
			}
		}
	}

	return (s);
}
