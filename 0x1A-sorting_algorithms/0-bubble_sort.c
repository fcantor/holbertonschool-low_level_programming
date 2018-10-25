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
	int i, temp, flag;

	i = 0;

	while (array != NULL)
	{
		if (array[i] > array[i + 1])
		{
			flag += 1;
			i += 1;

			temp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = temp;

			print_array(array, size);
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
