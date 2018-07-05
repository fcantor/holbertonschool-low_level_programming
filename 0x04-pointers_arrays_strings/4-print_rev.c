#include "holberton.h"

/**
 * print_rev - This function prints a string in reverse
 * followed by a newline
 * @s: The string to print in reverse
 */
void print_rev(char *s)
{
	int h, i, len;

	for (h = 0; s[h] != '\0'; h++)
		len++;

	for (i = len; i >= 0; --i)
		_putchar(s[i]);

	_putchar('\n');
}
