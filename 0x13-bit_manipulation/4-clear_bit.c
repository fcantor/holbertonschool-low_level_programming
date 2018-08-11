#include "holberton.h"

/**
 * clear_bit - This function sets the value of
 * a bit to 0 at a given index
 * @n: The pointer to the bit value
 * @index: The index of n to change
 * Return: 1 for success, -1 for failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	/* error check: if index greater than bit */
	if (index >= (sizeof(n) * 8))
		return (-1);

	/* change index at n to zero */
	*n = *n & ~(1 << index);

	return (1);
}
