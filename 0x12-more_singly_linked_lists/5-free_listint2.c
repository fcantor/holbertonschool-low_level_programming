#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - This function frees a listint_t list and
 * takes in a double pointer
 * @head: The double pointer to head node in the list
 */

void free_listint2(listint_t **head)
{
	/* check for null list */
	if (*head == NULL)
		return (NULL);

	/* create tmp pointers */
	listint_t **tmp;
	listint_t *tmp2;

	/* initialize pointers */
	tmp2 = NULL;
	tmp = &tmp2;

	while (*head != NULL)
	{
		*tmp = *head;

		*head = (*head)->next;

		free(*tmp);
	}
}
