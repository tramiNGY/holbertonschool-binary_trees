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
 * binary_tree_size - calculate size of a tree
 * @tree: pointer to the root of the tree
 * Return: return size if succed, 0 if fail
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	size = 0;
	if (tree == NULL)
		return (0);
	size = 1 + (binary_tree_height(tree->left) + binary_tree_height(tree->right));
	return (size);
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

	if (tree->parent == NULL && tree->left == NULL && tree->right == NULL)
		return (1);
	
	if (tree == NULL)
		return (0);
	size = binary_tree_size(tree);
	height = binary_tree_height(tree);
	expected_size = (1 << height) - 1;
	return (size == expected_size);
}
