#include "binary_trees.h"

/**
 * binary_tree_is_full - This function checks if a binary tree is full
 * @tree: A pointer to the root node of the tree
 * Return: 1 if tree is full, otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree)
	{
		/* node with zero children */
		if (tree->left == NULL && tree->right == NULL)
			return (1);

		/* recursively traverse tree for node with 2 children */
		if (tree->left && tree->right)
			return (binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right));
	}

	return (0);
}
