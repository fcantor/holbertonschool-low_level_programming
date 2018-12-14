#include "binary_trees.h"

/**
* binary_tree_depth - This function measures the depth of a node
* in a binary tree
* @tree: A pointer to the node
* Return: The depth of the tree, else 0 if tree is NULL
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	/* traverse up and count */
	while (tree && tree->parent)
	{
		tree = tree->parent;
		depth++;
	}

	return (depth);
}
