#include <unistd.h>
#include "holberton.h"

/**
 * print_last_digit - This function prints the last digit of a number
 * @n: The integer the function is receiving
 *
 * Return: the value of the last digit of n
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = (n % 10);

	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}

	_putchar(last_digit + '0');
	return (last_digit);
}
