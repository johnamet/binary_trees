#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of a node
 * in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: Return depth on Success
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t deep = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		tree = tree->parent;
		deep++;
	}

	return (deep);
}
