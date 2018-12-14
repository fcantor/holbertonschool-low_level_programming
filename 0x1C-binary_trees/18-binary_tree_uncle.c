#include "binary_trees.h"

/**
 * binary_tree_uncle - This function finds the uncle of a node
 * @node: A pointer to the node to find the uncle
 * Return: A pointer to the uncle node, otherwise NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	/* check if node & parent exist */
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	/* check grandparents */
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	else
		return (node->parent->parent->left);

	return (NULL);
}
