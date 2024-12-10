#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_insert_left - inserts a new node as the left-child
 * of another node
 * @parent: pointer to the node to insert to left-child in
 * @value: value to store in the new node
 * Return: returns a pointer to the created node or NULL if fail
 * or if parent NULL if parent already has left-child,
 * new node must tales its place
 * and old left-child must be set as left-child of new node
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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

	if (parent->left == NULL)
		parent->left = newnode;

	else
	{
		newnode->left = parent->left;
		parent->left->parent = newnode;
		parent->left = newnode;
	}
	return (newnode);
}
