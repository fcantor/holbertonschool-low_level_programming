#include "holberton.h"

int _strlen(char *s);

/**
 * print_rev - This function prints a string in reverse
 * followed by a newline
 * @s: The string to print in reverse
 */
void print_rev(char *s)
{
	int i, len;

	len = _strlen(s);

	for (i = len; i != -1; --i)
		_putchar(s[i]);

	_putchar('\n');
}
