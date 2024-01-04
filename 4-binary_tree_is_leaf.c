#include "binary_trees.h"
/**
 * binary_tree_is_leaf - function that checks if a node is a leaf
 * @node:  pointer to the node to check
 * return: return 0 on failure
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
        if (node != NULL && node->left == NULL && node->right == NULL)
                return 1;
        return 0;
}
