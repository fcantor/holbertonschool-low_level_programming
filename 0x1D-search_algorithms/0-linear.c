#include "search_algos.h"

/**
 * linear_search - This function searches for a value in an array
 * of integers using the Linear search algorithm
 * @array: Pointer to the first element of the array
 * @size: Number of elements in array
 * @value: The value to search for
 * Return: The first index where value is located; otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array && size != 0)
	{
		for (; i < size; i++)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	}
	return (-1);
}
