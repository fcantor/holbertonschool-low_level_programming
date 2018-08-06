#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * add_nodeint - This function adds a new node at the beginning
 * of a listint_t list
 * @head: The listint_t list
 * @n: The integer element inside the listint_t list
 * Return: The address of the new element, or NULL for failure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	/* create a new node & allocate memory for it */
	listint_t *new = malloc(sizeof(listint_t));

	/* check to see if malloc failed */
	if (new == NULL)
		return (NULL);

	/* assign new data */
	new->n = n;
	new->next = *head;

	/* assigning new as the head/beginning */
	*head = new;

	return (new);
}
