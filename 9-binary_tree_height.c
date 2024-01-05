#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure height
 *
 * Return: 0 if NULL otherwise size_t
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	binary_tree_t *left, *right;
	int left_height, right_height;

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

	right_height += binary_tree_height(tree->right);
	left_height += binary_tree_height(tree->left);

	return ((left_height > right_height ? left_height : right_height));
}

