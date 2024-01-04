#include "binary_trees.h"
/**
 * binary_tree_insert_right - function that inserts a node
 * as the right-child of another node
 * @parent: Pointer to the parent node
 * @value: the value to store in the new node
 * return: return a pointer to the created node,
 * or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value) {
    if (parent == NULL) {
        // Return NULL if the parent is NULL
        return NULL;
    }

    // Allocate memory for the new node
    binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

    if (new_node == NULL) {
        return NULL;
    }

    new_node->n = value;
    new_node->parent = parent;
    new_node->left = NULL;

    if (parent->right != NULL) {
        new_node->right = parent->right;
        parent->right->parent = new_node;
    } else {
        new_node->right = NULL;
    }

    parent->right = new_node;
    return new_node;
}
