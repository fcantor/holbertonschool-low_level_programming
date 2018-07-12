#include "holberton.h"

/**
 * _sqrt_recursion - This function returns the natural square root of a number
 * @n: The number to find the square root of
 * Return: The integer natural square root of n
 */

/**
 * helper - This function returns the natural square root of n to sqrt_recursion
 * @n: The number to find the squre root of
 * @i: The helper integer
 * Return: The integer natural square root
 */

int helper(int n, int i)
{
	/* if multiple of itself, return multiple */
	if (n == (i * i))
		return (i);
	/* else if greater than multiple of itself */
	else if (n > (i * i))
		/* use helper recursion to find natural root */
		return (helper(n, i + 1));
	else
		return (-1);
}

int _sqrt_recursion(int n)
{
	/* base cases */
	if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	/* call helper to find natural root */
	else
		return (helper(n, 1));
}
