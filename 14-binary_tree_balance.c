#include <stdio.h>
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

	i = 0;
	j = 0;
	if (tree == NULL)
		return (0);
	if (tree->left)
		i += 1 + binary_tree_height(tree->left);
	if (tree->right)
		j += 1 + binary_tree_height(tree->right);

	if (i > j)
		return (i);
	else
		return (j);
}

/**
 * binary_tree_balance - measures the balance factor
 * of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: return in balance factor or 0 if tree NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	left_height = 0;
	right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
	{
		left_height = binary_tree_height(tree->left);
		left_height++;
	}

	if (tree->right != NULL)
	{
		right_height = binary_tree_height(tree->right);
		right_height++;
	}

	return (left_height - right_height);
}
