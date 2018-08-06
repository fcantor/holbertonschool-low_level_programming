#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - This function prints all the elements of a listint_t list
 * @h: The pointer to the struct listint_t
 * Return: The number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
