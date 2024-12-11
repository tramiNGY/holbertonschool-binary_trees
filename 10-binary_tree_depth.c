#include "binary_trees.h"

/**
 * binary_tree_depth - calculate the depth of a binary tree
 * @tree: pointer to the root of the tree
 * Return: the depth of the tree or 0 if fail or root
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t i;

	i = 0;
	if (tree == NULL)
		return (0);
	if (tree->parent)
		i += 1 + binary_tree_depth(tree->parent);
	return (i);
}
