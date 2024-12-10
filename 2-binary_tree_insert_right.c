#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a new node as the right-child
 * of another node
 * @parent: pointer to the node to insert to right-child in
 * @value: value to store in the new node
 * Return: returns a pointer to the created node or NULL if fail
 * or if parent NULL if parent already has right-child,
 * new node must tales its place
 * and old right-child must be set as right-child of new node
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = value;
	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = NULL;

	if (parent->right == NULL)
		parent->right = newnode;

	else
	{
		newnode->right = parent->right;
		parent->right->parent = newnode;
		parent->right = newnode;
	}
	return (newnode);
}
