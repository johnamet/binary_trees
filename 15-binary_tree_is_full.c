#include "binary_trees.h"
/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 0 if full otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int left_height = 0;
	binary_tree_t *left = tree->left;
	binary_tree_t *right = tree->right;
	int right_height = 0;

	if (left != NULL)
	{
		left_height++;
		left = left->left;
	}

	if (right != NULL)
	{
		right_height++;
		right = right->right;
	}

	right_height += binary_tree_is_full(tree->right);
	left_height += binary_tree_is_full(tree->left);

	if ((right_height - left_height) != 0)
		return (0);

	return (1);
}
