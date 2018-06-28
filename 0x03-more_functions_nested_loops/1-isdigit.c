#include "holberton.h"

/**
 * _isdigit - This function checks whether c is an integer 0-9
 * @c: The integer to check
 * Return: 1 if c is a digit, otherwise 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);

}
