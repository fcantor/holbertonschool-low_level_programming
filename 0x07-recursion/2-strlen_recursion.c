#include "holberton.h"
#include <stdio.h>

/**
 * _strlen_recursion - This function returns the length of a string
 * @s: The string to count
 * Return: The integer length of the string
 */

int _strlen_recursion(char *s)
{
	/* base call */
	if (*s == 0)
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
