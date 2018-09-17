#include "lists.h"

/**
 * dlistint_len - This function returns the number of elements
 * in a dlistint_t linked list
 * @h: The pointer to the doubly linked list
 * Return: The number of elements in the list
 **/

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
