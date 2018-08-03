#include <stddef.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strlen - This function returns the length of a string
 * @s: Variable that contains a character array to be counted
 * Return: Length of the string
 */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		continue;

	return (i);
}


/**
 * *add_node_end - This function adds a new node at the
 * end of a linked list_t list
 * @head: The beginning of the linked list
 * @str: The string to duplicate into the new node
 * Return: The address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	/* creating last pointer */
	list_t *last;
	/* create new list & allocate memory for it */
	list_t *new = (list_t *)malloc(sizeof(list_t));

	/* if malloc fails, return NULL */
	if (new == NULL)
		return (NULL);

	/* assign data to new list */
	new->str = strdup(str);
	new->len = _strlen(str);

	/* assign link of new node to NULL */
	new->next = NULL;

	/* if head is NULL, new list becomes head */
	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		/* traverse list to get to the last node */
		while (last->next != NULL)
			last = last->next;
		/* assign last node to new node */
		last->next = new;
	}

	return (new);

}
