#include <stddef.h>
#include "lists.h"
#include <stdio.h>

/**
 * list_len - This function returns the number of
 * elements in a linked list_t list
 * @h: The linked list
 * Return: The number of elements in h
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
