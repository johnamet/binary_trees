#include "binary_trees.h"
/**
 * binary_tree_leaves - function that counts the leaves in a
 * binary tree
 * @tree: pointer to the root node of the tree to count the
 * number of leaves
 * return: Return NULL if tree is NULl
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaves;
	size_t right_leaves;
	size_t count;

	if (tree == NULL)
		return (0);

	/* If the node is a leaf, return 1*/
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_leaves = binary_tree_leaves(tree->left);
	right_leaves = binary_tree_leaves(tree->right);

	count = left_leaves + right_leaves;
	return (count);
}
