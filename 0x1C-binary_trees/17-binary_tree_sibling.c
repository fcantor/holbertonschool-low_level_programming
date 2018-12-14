#include "binary_trees.h"

/**
 * binary_tree_sibling - This function finds the sibling of a node
 * @node: A pointer to the node of the sibling we're finding
 * Return: A pointer to the sibling node, or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	/* check if node or parents exist */
	if (!node || !node->parent)
		return (NULL);

	/* check node parent's children's value */
	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
