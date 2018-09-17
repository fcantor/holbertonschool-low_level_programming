#include "lists.h"

/**
 * add_dnodeint - This function adds a new node at the beginning
 * of a dlistint_t list
 * @head: Double pointer to the head of the list
 * @n: The int value of element n in the list
 * Return: The address of the new element, or NULL if it failed
 **/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	if (head)
		new_node = malloc(sizeof(dlistint_t));
	if (new_node)
	{
		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = *head;
		if (*head)
			(*head)->prev = new_node;
		*head = new_node;
	}
	else
		return (NULL);

	return (new_node);
}
