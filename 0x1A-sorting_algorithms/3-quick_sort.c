#include "sort.h"

/**
 *quick_sort - sort an array of integers using
 *quicksort algorithm
 *@array: array of integers
 *@size: size of array
 *Return: void
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;

	sort(array, 0, size - 1, size);
}

/**
 *sort - sorts 'lo' half and 'high' half of array
 *@array: array of integers
 *@begin: beginning of array
 *@end: end of array
 *@size: size of array
 *Return: void
 */
void sort(int *array, size_t begin, size_t end, size_t size)
{
	size_t p;

	p = partition(array, begin, end, size);
	if (begin < end)
	{
		sort(array, begin, p - 1, size);
		sort(array, p + 1, end, size);
	}
}

/**
 *partition - cuts array in half, swaps integers
 *in lo and high half
 *@array: array of integers
 *@begin: beginning of array
 *@end: end of array
 *@size: size of array
 *Return: pivot
 */
size_t partition(int *array, size_t begin, size_t end, size_t size)
{

	size_t pivot = array[end];
	size_t que = begin;
	size_t tmp;
	int i;

	for (i = begin; i < end; i++)
	{
		if (array[i] <= pivot)
		{
			/* swap array[i] & array[que] */
			tmp = array[i];
			array[i] = array[que];
			array[que] = tmp;

			/* increment que and print array */
			que++;
			print_array(array, size);
		}
		/* swap a[que] and pivot */
		tmp = array[que];
		array[que] = pivot;
		pivot = tmp;
	}
	return (que);

}
