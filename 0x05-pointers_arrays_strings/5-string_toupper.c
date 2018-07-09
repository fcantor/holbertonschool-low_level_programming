#include "holberton.h"

/**
 * *string_toupper - This function changes all lowercase characters
 * of a string to uppercase
 * @s: The string it's evaluating
 * Return: An all uppercase string
 */

char *string_toupper(char *s)
{
	int i, placement;

	/* loop through the array and evaluate each character */
	for (i = 0; s[i] != 0; i++)
	{
		/* if character is lowercase, find uppercase value */
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			/* placement of char in lowercase alphabet */
			placement = 26 - ('z' - s[i]);

			/* replace that value with uppercase */
			s[i] = placement + 64;
		}
	}

	/* return converted string */
	return (s);

}
