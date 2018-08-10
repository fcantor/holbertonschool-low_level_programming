#include <stdlib.h>
#include "holberton.h"

/**
 * binary_to_uint - This function converts a binary number to
 * an unsigned int
 * @b: A pointer to the string of 0 and 1 chars
 * @Return: The converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0, i;

	/* if b is NULL, return 0 */
	if (b == NULL)
		return (0);

	/* traverse through binary string while b exists */
	while (b && *b)
	{
		/* if string has anything other than 1 or 0 */
		if (*b < '0' || *b > '1')
			return (0);
		/* math conversion of binary to decimal */
		decimal = decimal * 2 + *b - '0';
		b++;
	}

	/* return converted unsigned int decimal number */
	return (decimal);
}
