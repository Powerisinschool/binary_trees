#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a tree node is a leaf
 *
 * @node: binary_tree_t * (pointer to the node)
 *
 * Return: 1 if node is a leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left != NULL)
		return (0);
	if (node->right != NULL)
		return (0);

	return (1);
}
