#include "lists.h"

/**
 * get_dnodeint_at_index - This function returns the nth node
 * of a dlistint_t linked list
 * @head: The head node of the linked list
 * @index: The index of the node, starting from 0
 * Return: The nth node, otherwise NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i = 0;

	if (!head)
		return (NULL);

	while (current)
	{
		if (i == index)
			return (current);
		i++;
		current = current->next;
	}

	return (current);
}
