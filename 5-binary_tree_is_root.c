#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_is_root - Checks if a given node is root
 * @node: Pointer to the node to check
 * Return: 0 if NULL otherwise 1
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
