#include "binary_trees.h"

/**
 * binary_tree_postorder - This function goes through a binary tree
 * and prints the values in post-order traversal
 * @tree: A pointer to the root node
 * @func: A pointer to the function that prints the value
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
