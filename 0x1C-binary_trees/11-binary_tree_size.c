#include "binary_trees.h"

/**
 * binary_tree_size - This function measures the size of a binary tree
 * @tree: A pointer to the root node of the tree
 * Return: The size of the tree, otherwise 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left = 0, right = 0, size = 0;

	if (!tree)
		return (0);

	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);
	size = left + right + 1;

	return (size);

}
