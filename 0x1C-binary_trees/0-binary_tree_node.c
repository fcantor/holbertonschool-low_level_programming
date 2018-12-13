#include "binary_trees.h"

/**
 * binary_tree_node - This function creates a binary tree node
 * @parent: The pointer to the node's parent
 * @value: The data inside the new binary tree node
 * Return: A pointer to the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
