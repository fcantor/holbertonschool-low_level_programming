#include "binary_trees.h"

/**
 * binary_tree_nodes - This function counts the nodes with at least
 * one child in a binary tree
 * @tree: A pointer to the root node of the tree
 * Return: The number of nodes in the tree; otherwise 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (!tree)
		return (0);

	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);
	if (tree->left || tree->right)
		nodes++;

	return (nodes);
}
