#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "binary_trees.h"
/**
 * binary_tree_node - Creates a binary tree node
 * @parent: Pointer to the parent node of
 * the node to create
 * @value: The value to put in the new node
 *
 * Return: Pointer to binary_tree_node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *p = malloc(sizeof(binary_tree_t));

	/*Check if the malloc fails*/
	if (p == NULL)
		return (NULL);

	p->n = value;
	p->left = NULL;
	p->right = NULL;
	p->parent = parent;

	return (p);
}
