#include "binary_trees.h"

/**
 * binary_tree_insert_left - This function inserts a node as the left-child
 * of another node
 * @parent: A pointer to the node to insert the left-child in
 * @value: The value to store in the new node
 * Return: A pointer to the created node, or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_child = NULL;

	/* if parent is null */
	if (!parent)
		return (NULL);

	/* malloc new node to be left-child */
	left_child = binary_tree_node(parent, value);
	if (!left_child)
		return (NULL);

	/* Check to see if parent already has left node */
	if (parent->left)
	{
		/* store existing left-child inside tmp before replacing */
		parent->left->parent = left_child;
		left_child->left = parent->left;
	}
	parent->left = left_child;

	return (left_child);
}
