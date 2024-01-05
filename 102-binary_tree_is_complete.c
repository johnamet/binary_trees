#include "binary_trees.h"
/**
 * binary_tree_is_complete - Checks if a binary tree is complete
 * @tree: Pointer to the root node of the tree to check
 * @index: The index of the count
 * @nodes: Number of nodes in tree
 * Return: 1 if complete otherwise 0
 */
int is_complete(const binary_tree_t *tree, int index, int nodes);
int count_nodes(const binary_tree_t *tree);
int binary_tree_is_complete(const binary_tree_t *tree)
{
	(void) tree;

	if (tree == NULL)
	{
		return (0);
	}

	return (is_complete(tree, 0, count_nodes(tree)));
}

/**
 * is_complete - Checks if a tree is complete
 * @tree: Pointer to the tree to check
 * @index: Current index
 * @nodes: Number of nodes in the tree
 *
 * Return: 1 if complete otherwise 0
 */

int is_complete(const binary_tree_t *tree, int index, int nodes)
{
	if (tree == NULL)
		return (1);

	if (index >= nodes)
		return (0);

	return (is_complete(tree->left, 2 * index + 1, nodes)
			&& is_complete(tree->right, 2 * index + 2, nodes));
}
/**
 * count_nodes - Count the number of nodes in atree
 * @tree: Pointer to the tree to count
 *
 * Return: int of the nodes in the tree
 */
int count_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + count_nodes(tree->left) + count_nodes(tree->right));
}
