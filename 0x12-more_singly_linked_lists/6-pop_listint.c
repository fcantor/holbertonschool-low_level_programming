#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - This function deletes the head node of a listint_t linked list,
 * and returns the head node's data
 * @head: A pointer to the listint_t list
 * Return: The head node's data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	/* if head node is NULL, return NULL */
	if (*head == NULL)
		return (0);

	/* set tmp to point to what head is pointing to */
	tmp = *head;

	/* copy head values to tmp values */
	*head = (*head)->next;
	n = tmp->n;

	free(tmp);

	return (n);
}
