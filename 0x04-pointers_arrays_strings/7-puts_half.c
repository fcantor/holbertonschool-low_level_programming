#include "holberton.h"

/**
 * puts_half - This function prints half of a string
 * followed by a newline
 * @str: The string to be evaluated
 */
void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != 0; i++)
		;

	j = (i + 1) / 2;

	for (; str[j] != 0; j++)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}
