#include <unistd.h>
#include "holberton.h"

/**
 * print_sign - checks the sign of an int passed to is
 * and prints the sign (+ / -)
 * @n: The integer to check
 *
 * Return: 1 if n is greater than zero, and prints +
 * returns 0 if n is zero, and prints 0
 * returns -1 if n is less than zero, and prints -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
