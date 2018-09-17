#include "lists.h"

/**
 * free_dlistint - This function frees a dlistint_t list
 * @head: The head node of the list
 **/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = NULL;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
