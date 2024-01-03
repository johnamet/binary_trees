#include <stdlib.h>
#include "binary_trees.h"
/**
 * Goes through a binary tree using in-order traversal
 * @tree: Pointer to the root ode of the tree to traverse
 * @func: Pointer to a funtion to call each node
 *
 * Return: Nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}