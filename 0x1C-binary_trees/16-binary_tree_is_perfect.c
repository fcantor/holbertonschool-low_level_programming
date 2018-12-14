#include "binary_trees.h"

/**
 * binary_tree_is_perfect - This function checks if a binary tree is perfect
 * @tree: A pointer to the root node
 * Return: 1 if a tree is perfect, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	/* empty tree is APPARENTLY NOT perfect */
	if (!tree)
		return (0);

	/* single node is perfect */
	if (binary_tree_is_leaf(tree))
		return (1);

	/* if left & right-child exist */
	if (tree->left && tree->right)
	{
		/* check depth */
		if (binary_tree_height(tree->left) != binary_tree_height(tree->right))
			return (0);
	}

	/* recursively check depth of subtrees */
	if (binary_tree_is_perfect(tree->left) == 0 ||
		binary_tree_is_perfect(tree->right) == 0)
		return (0);

	return (1);
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
