#include "lists.h"

/**
 * delete_dnodeint_at_index - This function deletes the node at the passed
 * argument index of the passed dlistint_t linked list
 * @head: The head node of the linked list
 * @index: The index of the node to be deleted
 * Return: 1 for success, else -1 for failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = NULL;

	if (head)
	{
		/* traverse through list to make sure */
		tmp = *head;
		while (tmp && index)
		{
			tmp = tmp->next;
			index--;
		}
		if (!index && tmp)
		{
			if (tmp->prev)
				tmp->prev->next = tmp->next;
			else
				*head = tmp->next;
			if (tmp->next)
				tmp->next->prev = tmp->prev;
			free(tmp);
			return (1);
		}
	}
	return (-1);
}
