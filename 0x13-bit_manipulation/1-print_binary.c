#include "holberton.h"
#include <stdio.h>

/**
 * print_binary - This function prints the binary
 * representation of a number
 * @n: The binary number to be converted
 */

void print_binary(unsigned long int n)
{

	/* if decimal is greater than 1, divide by 2 */
	if (n > 1)
	{
		/* use recursion to store nums divided by 2 */
		print_binary(n >> 1);
	}

	/**
	 * go up stacked nums from shift,
	 * mask off some set of bits using &
	 * print output in ascii
	 */
	_putchar((n & 1) + '0');
}
