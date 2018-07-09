#include "holberton.h"

/**
 * cap_string - This function capitalizes all words of a string
 * @s: String to evaluate
 * Return: The string converted
 */

char *cap_string(char *s)
{
	int i;

	/* make sure the first letter is capitalized */
	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] = s[0] - ' ';

	for (i = 1; s[i] != '\0'; i++)
	{
		/* see if the element before is a separator */
		if ((s[i - 1] == ' ' || s[i - 1] == '\n' || s[i - 1] == '\t'
		         || s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '!'
		         || s[i - 1] == '?' || s[i - 1] == '"' || s[i - 1] == '('
		          || s[i - 1] == ')' || s[i - 1] == '{' || s[i - 1] == '}'
		     || s[i - 1] == '.') && (s[i] > 'a' && s[i] < 'z'))
		{
			/* if it is, convert the s[i] element to uppercase */
			s[i] = s[i] - ' ';
		}
	}

	/* return the converted string */
	return (s);
}
