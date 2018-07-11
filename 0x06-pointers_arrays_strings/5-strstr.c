#include "holberton.h"
#include <stdio.h>

/**
 * *_strstr - This function locates a substring
 * @haystack: The string to search through
 * @needle: The substring to search for
 * Return: A pointer to the beginning of the located string; Otherwise, NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;
	char *p;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				p = &haystack[i];
				while (haystack[i] == needle[j])
				{
					i++;
					j++;
					if (haystack[i] == ' ')
						return (p);
				}
	       	   	}
		}
	}

	return (0);
}
