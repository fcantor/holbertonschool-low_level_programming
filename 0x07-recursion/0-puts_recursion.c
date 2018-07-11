#include "holberton.h"

/**
 * _puts_recursion - This function prints a string followed by a newline
 * @s: The string array to print to standard output
 */

void _puts_recursion(char *s)
{
	/* if the pointer index reaches the null terminator, newline & return */
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	/* otherwise, print the current array index */
	_putchar(*s);
	/* call function */
	_puts_recursion(s + 1);
}
