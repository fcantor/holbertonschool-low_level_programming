#include "sort.h"
#include <stdio.h>

/**
 *selection_sort - sort an array of numbers using
 *selection sort algorithm
 *@array: array of integers
 *@size: size of array
 *Return: void
 */
void selection_sort(int *array, size_t size)
{
	int temp;
	size_t i, j, small_num;

	if (size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		small_num = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[small_num] > array[j])
				small_num = j;
		}
		if (small_num != i)
		{
			temp = array[i];
			array[i] = array[small_num];
			array[small_num] = temp;

			print_array(array, size);
		}
	}
}
