#include "binary_trees.h"
/**
 * function that measures the depth of a node
 * in a binary tree
 * @tree: pointer to the node to measure the depth
 * return: Return depth on Success
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t deep = 0;

	while (tree->parent != NULL)
	{
		tree = tree->parent;
		deep++;
	}

	return (deep);
}
