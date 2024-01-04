#include "binary_trees.h"
/**
 * binary_tree_postorder -  function that goes through a binary tree
 * using post-order traversal
 * @tree: is a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node. The
 * value in the node must be passed as a parameter to this function.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/*Recursive post_order traversal on the right subtree*/
	binary_tree_postorder(tree->left, func);

	/*Recursive post_order traversal on the right subtree*/
	binary_tree_postorder(tree->right, func);

	/*call the function for the current node after traversing*/
	func(tree->n);
}
