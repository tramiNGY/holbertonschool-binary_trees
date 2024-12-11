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
 * binary_tree_same_height - checks if the left and right subtree
 * have the same height
 * @tree: pointer to the root
 * Return: 1 if they have the same height, 0 if not
 */

size_t binary_tree_same_height(const binary_tree_t *tree)
{
	int left = binary_tree_height(tree->left);
	int right = binary_tree_height(tree->right);

	if (left == right)
		return (1);
	else
		return (0);
}

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

/**
 * binary_tree_is_perfect - checks if a tree is perfect
 * @tree: pointer to the root of the tree
 * Return: 1 if the tree is perfect, 0 if not
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (!binary_tree_is_full(tree))
		return (0);
	if (!binary_tree_same_height(tree))
		return (0);
	return (1);
}
