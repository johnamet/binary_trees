#include "binary_trees.h"
#include <unistd.h>

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 0 if full otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_height, right_height;
	binary_tree_t *left, *right;

	if (tree == NULL)
		return (0);

	left_height = 0;
	left = tree->left;
	right = tree->right;
	right_height = 0;

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
