#include "binary_trees.h"

/**
 * binary_tree_is_leaf - chekcs if the node is a leaf
 * @node: node to check
 * Return: 1 if node is a leaf, 0 if it is not
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
