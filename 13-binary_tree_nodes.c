#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree: Pointer to the root node of the tree to count the number of nodes
 *
 * Return: size_t otherwise 0 if NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	count++;
	count += binary_tree_nodes(tree->right);
	count += binary_tree_nodes(tree->left);

	return (count);
}
