#include "holberton.h"

/**
 * puts2 - This function prints one char out of 2 of a string
 * followed by a newline
 * @str: The string to be evaluated
 */
void puts2(char *str)
{
	int i;
	char ch;

	for (i = 0; str[i] != 0; i++)
	{
		if (i % 2 == 0)
		{
			ch = str[i];
			_putchar(ch);
		}
	}

	_putchar('\n');
}
