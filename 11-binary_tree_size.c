#include "binary_trees.h"

/**
 * binary_tree_size - calculate the size of a binary tree
 * @tree: pointer to the root
 * Return: the size of a tree or 0 if fail
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t i;

	i = 1;
	if (tree == NULL)
		return (0);
	i += binary_tree_size(tree->left);
	i += binary_tree_size(tree->right);
	return (i);
}
