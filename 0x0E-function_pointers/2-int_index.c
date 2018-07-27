#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - This function searches for an integer
 * @array: The array to search through
 * @size: The number of elements in the array
 * @cmp: A pointer to the function to be used to compare values
 * Return: The index of the first element for which the cmp function
 * does not return 0. If no element matches or if size is <= 0, return -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, elem;

	i = 0;

	/* check if size <= 0, or if array or pointer array are NULL */
	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	/* search through array */
	while (i < size)
	{
		/* set element value to value inside current element in array */
		elem = cmp(array[i]);
		/* if the element is not zero, return that element */
		if (elem != 0)
			return (i);

		i++;
	}

	return (-1);
}
