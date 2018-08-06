#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * listint_len - This function returns the number of elements in a linked listint_t
 * list
 * @h: The list to print
 * Return: The number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
