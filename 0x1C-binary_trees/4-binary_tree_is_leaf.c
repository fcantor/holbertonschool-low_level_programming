#include "binary_trees.h"

/**
 * binary_tree_is_leaf - This function checks if a node is a leaf
 * @node: A pointer to the node
 * Return: 1 if node is a leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node)
	{
		/* if left & right child doesn't exist--it's a leaf! */
		if (!node->left && !node->right)
			return (1);
	}

	return (0);
}