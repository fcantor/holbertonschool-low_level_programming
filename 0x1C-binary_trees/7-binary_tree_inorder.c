#include "binary_trees.h"

/**
 * binary_tree_inorder - This function goes through a binary tree using
 * in-order traversal and prints the values
 * @tree: A pointer to the root node
 * @func: A pointer to the function that prints the value
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		/* don't need if statements because of recursion */
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
