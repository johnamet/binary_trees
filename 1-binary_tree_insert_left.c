#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left of another node
 * @parent: Pointer to the node to inset the left-child in
 * @value: Value to store in the new node
 *
 * Return: Pointer to the created node otherwise NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node;

	if (parent == NULL)
		return (NULL);

	left_node = malloc(sizeof(binary_tree_t));

	/*Check if malloc fails*/
	if (left_node == NULL)
		return (NULL);

	left_node->n = value;
	left_node->parent = parent;
	left_node->left = NULL;
	left_node->right = NULL;

	if (parent->left == NULL)
	{
		parent->left = left_node;
	}
	else
	{
		left_node->left = parent->left;
		parent->left->parent = left_node;
		parent->left = left_node;
	}

	return (left_node);
}
