#include "binary_trees.h"

/**
 * binary_tree_height - This function measures the height of a binary tree
 * @tree: A pointer to the root node
 * Return: Height of the tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_depth = 0, right_depth = 0;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	/* compute the depth of each subtree if they exist */
	left_depth = binary_tree_height(tree->left);
	right_depth = binary_tree_height(tree->right);

	/* compare the values of each depth */
	if (left_depth >= right_depth)
		return (left_depth + 1);
	else
		return (right_depth + 1);
}
