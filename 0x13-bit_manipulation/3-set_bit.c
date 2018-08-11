#include "holberton.h"

/**
 * set_bit - This function sets the value of a bit to 1
 * at a given index
 * @n: The pointer to the bit value
 * @index: The index of n to change the value of
 * Return: 1 for success, or -1 for an error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	/* error check: if index greater than bit */
	if (index >= (sizeof(n) * 8))
		return (-1);

	/* switch one in n the bit at the index */
	*n  = *n | 1 << index;

	return (1);
}
