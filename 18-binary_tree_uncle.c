#include "binary_trees.h"

/**
 * binary_tree_uncle - function that finds the uncle of a node
 * @node: a pointer to the node to find the uncle
 * Return: If node is NULL or If node has no uncle, return NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandparent;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	grandparent = node->parent->parent;

	if (grandparent->left == node->parent)
		return (grandparent->right);
	else if (grandparent->right == node->parent)
		return (grandparent->left);
	else
		return (NULL);
}
