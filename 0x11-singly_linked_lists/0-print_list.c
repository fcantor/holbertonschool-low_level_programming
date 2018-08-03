#include <stddef.h>
#include "lists.h"
#include <stdio.h>

/**
 * print_list - This function prints all the elements of a list_t list
 * @h: The list to print
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		if (h->str == NULL || h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		i++;
	}

	return (i);
}
