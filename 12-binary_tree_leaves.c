#include "binary_trees.h"

/**
 * binary_tree_leaves - Find the number of leaves in a binary tree from a node
 *
 * @tree: Pointer to node
 *
 * Return: Number of leaves in tree
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
    if (!tree)
        return (0);

    if (!(tree->left) && !(tree->right))
        return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right) + 1);
    return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
