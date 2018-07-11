#include "holberton.h"

/**
 * _print_rev_recursion - This function prints a string in reverse
 * @s: The string array to print to standard output
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
