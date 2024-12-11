#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if the tree is full or not
 * @tree: pointer to the root of the tree
 * Return: 1 if the tree is full, 0 if it is not
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}
