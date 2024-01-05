#include "binary_trees.h"
/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 * @first - Pointer to the first node
 * @second - Pointer to the second node
 *
 * Return: Pointer to the lowest common ancestor otherwise NULL
 */
binary_tree_t *binary_trees_ancestor(const  binary_tree_t *first,
		const binary_tree_t *second)
{
	if (first == NULL || second == NULL ||
			(first->parent == NULL && second->parent == NULL))
		return (NULL);

	const binary_tree_t *ancestor = first;

	while (ancestor != NULL)
	{
		const binary_tree_t *temp = second;

		while (temp != NULL)
		{
			if (ancestor == temp)
				return ((binary_tree_t *)ancestor);
			else
				temp = temp->parent;
		}

		ancestor = ancestor->parent;
	}

	return (NULL);
}
