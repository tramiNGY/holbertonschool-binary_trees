#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a tree
 * @tree: pointer to the root
 * Return: either i or j depending on the biggest one, -1 if fail
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t i;
	size_t j;

	if (tree == NULL)
		return (0);

	i = (binary_tree_height(tree->left)) + 1;
	j = (binary_tree_height(tree->right)) + 1;

	if (i > j)
	{
		return (i);
	}
	else
	{
		return (j);
	}
}
