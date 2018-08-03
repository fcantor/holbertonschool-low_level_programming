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
 * *add_node - This function adds a new node at the
 * beginning of a linked list_t list
 * @head: The beginning of the linked list
 * @str: The string to duplicate into the new node
 * Return: The address of the new element, of NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{

	/* create new list & allocate memory for it */
	list_t *new = (list_t *)malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	/* assign new data */
	new->str = strdup(str);
	new->len = _strlen(str);

	/* assign 'head' as next element of new list */
	new->next = (*head);

	/* move head to point to new list */
	(*head) = new;

	return (new);

}
