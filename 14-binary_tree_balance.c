#include "binary_trees.h"

/**
 * binary_tree_balance -Function  that measures the balance factor of
 * a binary tree
 * @tree:  a pointer to the root node of the tree to measure the
 * balance factor
 * Return: if tree is NULL, return 0
 */
size_t binary_tree_height(const binary_tree_t *tree);
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;
	int balance_factor;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	balance_factor = (int)left_height - (int)right_height;
	return (balance_factor);
}

/**
 * binary_tree_height - Function that measures the height of binary tree
 * @tree: Pointer to the root node of the tree
 * Return: retun 0 if tree is NuLl
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
}
