#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a tree
 * @tree: pointer to the root
 * Return:+ either i or j depending on the biggest one, -1 if fail
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t i;
	size_t j;

	if (tree == NULL)
		return (0);
	i = binary_tree_height(tree->left);
	j = binary_tree_height(tree->right);
	return ((i > j ? i : j) + 1);
}

/**
 * binary_tree_size - calculate size of a tree
 * @tree: pointer to the root of the tree
 * Return: return size if succed, 0 if fail
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

/**
 * binary_tree_is_perfect - checks if a tree is perfect
 * @tree: pointer to the root of the tree
 * Return: 1 if the tree is perfect, 0 if not
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height;
	int size;
	int expected_size;

	if (tree == NULL)
		return (0);
	size = binary_tree_size(tree);
	height = binary_tree_height(tree);
	expected_size = (1 << height) - 1;
	return (size == expected_size);
}
