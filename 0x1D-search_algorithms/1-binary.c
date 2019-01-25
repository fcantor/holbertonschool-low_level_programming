#include "search_algos.h"

/**
 * print - prints the current index in the array
 * @array: Pointer to the first element of the array
 * @lower: Initial lower bound index
 * @upper: Upper bound index
 */
void print(int *array, size_t lower, size_t upper)
{
        size_t i = 0;

        printf("Searching in array: ");
        for (i = lower; i < upper; i++)
                printf("%d, ", array[i]);
        printf("%d\n", array[upper]);
}

/**
 * binary_search - This function searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: Pointer to the first element of the array
 * @size: The number of elements in the array
 * @value: The value to search for
 * Return: The index where value is located; else -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t lower = 0, upper = size - 1, mid = 0;

	if (array)
	{
		while (lower <= upper)
		{
			mid = (upper + lower) / 2;

			print(array, lower, upper);
			if (array[mid] < value)
				lower = mid + 1;
			else if (array[mid] > value)
				upper = mid - 1;
			else
				return (mid);
		}
	}
	return (-1);
}
