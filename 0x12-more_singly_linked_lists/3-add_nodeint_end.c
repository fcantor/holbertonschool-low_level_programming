#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * add_nodeint_end - This function adds a new node at the end
 * of a listint_t list
 * @head: The pointer to the listint_t list
 * @n: The integer element inside the listint_t list
 * Return: The address of the new element, or NULL for failure
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* create the last node */
	listint_t *last;

	/* create temp node & allocate memory for it */
	listint_t *tmp = malloc(sizeof(listint_t));

	/* check to make sure malloc didn't fail */
	if (tmp == NULL)
		return (NULL);

	/* assign data to tmp */
	tmp->n = n;
	tmp->next = NULL;

	/* if head is NULL, then tmp node becomes head */
	if (*head == NULL)
		*head = tmp;
	else
	{
		last = *head;
		/* traverse list to get to the last node */
		while (last->next != NULL)
			last = last->next;
		/* assign tmp to that last node */
		last->next = tmp;
	}

	return (tmp);
}
