#include "binary_trees.h"

/**
 * binary_tree_insert_right - This function inserts a node as the right-child
 * of another node
 * @parent: A pointer to the node to insert the right-child in
 * @value: The value to store in the new node
 * Return: A pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_child = NULL;

	/* check first if parent exists */
	if (!parent)
		return (NULL);

	/* malloc and assign value */
	right_child = binary_tree_node(parent, value);
	if (!right_child)
		return (NULL);

	/* check if right-child already exists */
	if (parent->right)
	{
		parent->right->parent = right_child;
		right_child->right = parent->right;
	}
	parent->right = right_child;

	return (right_child);
}
