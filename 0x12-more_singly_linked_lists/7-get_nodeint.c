#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - This function returns the nth node of
 * a listint_t linked list
 * @head: The pointer to listint_t list
 * @index: The index of the node, starting at 0
 * Return: The nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/**
	 * algorithm:
	 * (1) initialize count to 0
	 * (2) loop through the link list
	 * (3) if count is equal to the passed index, then return current node
	 * (4) increment count
	 * (5) change current to point to next of the current
	 */

	/* (1) */
	listint_t *current = head;

	/* (2) */
	unsigned int i = 0;

	/* (3) */
	if (head == NULL)
		return (NULL);

	/* (4) - (5) */
	while (current != NULL)
	{
		if (i == index)
			return (current);

		i++;
		current = current->next;
	}

	return (current);
}
