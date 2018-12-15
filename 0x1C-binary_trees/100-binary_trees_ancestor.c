#include "binary_trees.h"

/**
 * binary_trees_ancestor - This function finds the lowest common ancestor
 * of two nodes
 * @first: A pointer to the first node
 * @second: A pointer to the second node
 * Return: A pointer to the lowest common ancestor node of the two
 * otherwise, if not found, it will return NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	if (!first || !second)
		return (NULL);

	if (first == second->parent)
		return ((binary_tree_t *)first);
	if (second == first->parent)
		return ((binary_tree_t *)second);
	if (first->parent == second->parent)
		return ((binary_tree_t *)first->parent);
	if (first->parent == second->parent->parent)
		return ((binary_tree_t *)second->parent->parent);
	if (second->parent == first->parent->parent)
		return ((binary_tree_t *)first->parent->parent);
	binary_trees_ancestor(first->parent, second->parent);

	return (NULL);
}