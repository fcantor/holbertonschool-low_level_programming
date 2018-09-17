#include "lists.h"

/**
 * print_dlistint - This function prints all elements of dlistint_t
 * @h: the pointer to the linked list dlistint_t
 * Return: the number of nodes
 **/

size_t print_dlistint(const dlistint_t *h)
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
