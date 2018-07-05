#include "holberton.h"

/**
 * print_rev - This function prints a string in reverse
 * followed by a newline
 * @s: The string to print in reverse
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++);

	for (; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
