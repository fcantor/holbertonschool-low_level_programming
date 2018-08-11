#include "holberton.h"

/**
 * get_bit - This function returns the value of a bit at
 * a given index
 * @n: The bit passed to the function
 * @index: The index to find
 * Return: The value of a bit at that given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	/* shift to the index */
	unsigned int val = n >> index;

	/* error check: if index greater than bit */
	if (index >= (sizeof(n) * 8))
		return (-1);

	/* mask off low-order bits and return last bit */
	return (val & 1);
}
