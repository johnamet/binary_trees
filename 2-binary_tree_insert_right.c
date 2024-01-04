#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * binary_tree_insert_right - function that inserts a node as the
 * right-child of another node
 * @parent: Pointer to the parent node
 * @value: the value to store in the new node
 * Return: Return NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);

	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	else
		new_node->right = NULL;
	parent->right = new_node;
	return (new_node);
}
