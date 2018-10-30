#include "sort.h"

/**
 *
 *
 *
 *
 *
 */
void bubble_sort(int *array, size_t size)
{
	int temp, flag;
	size_t i = 0;

	while (array && i < size)
	{
		if (array[i] > array[i + 1])
		{
			temp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = temp;

			print_array(array, size);

			flag += 1;
                        i += 1;
		}
		else
			i += 1;

		if (array[i + 1] == '\0')
		{
			i = 0;

			if (flag == 0)
				break;
			flag = 0;
		}
	}
}
