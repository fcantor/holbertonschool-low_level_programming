#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - This function executes a function given as a
 * parameter on each element of an array
 * @array: The array to print from
 * @size: The size of the array
 * @action: A pointer to the function you need to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	/* make sure that counter variable is of same type as size */
	size_t i;

	/* check to see if pointer or array are NULL */
	if (action == NULL || array == NULL)
		;
	else
	{
		/* while not reached end of array, print elements */
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
