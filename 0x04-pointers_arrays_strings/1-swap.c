#include "holberton.h"

/**
 * swap_int - This function swaps the values of two integers
 * @a: First integer whose value is to be swapped with b
 * @b: Second integer whose value is to be swapped with a
 */
void swap_int(int *a, int *b)
{
	int first, second;

	first = *a;
	second = *b;

	*a = second;
	*b = first;
}
