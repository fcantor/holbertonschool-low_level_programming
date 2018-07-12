#include "holberton.h"

/**
 * helper - This function helps calculate whether n is prime
 * @n: The integer to test
 * @i: The integer to help calculate whether n is prime
 * Return: 1 if n is prime, otherwise 0
 */

int helper(int n, int i)
{
	/* if n is greater than or equal to 25 */
	if (n >= (i * i))
	{
		/* skip it's multiples and even numbers after 5 */
		if (n % i == 0 || n % (i + 2) == 0)
			return (0);
		/* check primes after 11 */
		i = i + 6;
	}
	return (1);
}



/**
 * is_prime_number - This function returns a 1 if input integer is prime
 * @n: The integer to test
 * Return: 1 if the n is prime, otherwise 0
 */

int is_prime_number(int n)
{
	/* if less than 1, not a prime */
	if (n <= 1)
		return (0);
	/* 2 and 3 are prime */
	else if (n <= 3)
		return (1);
	/* if factors of 2 or 3, not likely a prime */
	else if (n % 2 == 0 || n % 3 == 0)
		return (0);
	/* check everything after 5 */
	else
		return (helper(n, 5));
}
