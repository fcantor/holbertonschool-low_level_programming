#include "holberton.h"

/**
 * _pow_recursion - This function returns the value of x raised to y
 * @x: The base integer
 * @y: The degree integer to raise x to
 * Return: The integer gotten from raising x to y
 */

int _pow_recursion(int x, int y)
{
	/* if y is negative */
	if (y < 0)
		return (-1);
	/* if y is 0 */
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
