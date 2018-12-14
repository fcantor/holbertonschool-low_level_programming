#include "binary_trees.h"

/**
 * binary_tree_balance - This function measures the balance factor
 * of a binary tree
 * @tree: A pointer to the root node of the tree
 * Return: The balance factor, otherwise 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance = 0, left_depth = 0, right_depth = 0;

	if (!tree)
		return (0);
	if (tree->left)
		left_depth = 1 + binary_tree_height(tree->left);
	if (tree->right)
		right_depth = 1 + binary_tree_height(tree->right);
	balance = left_depth - right_depth;

	return (balance);
}

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
