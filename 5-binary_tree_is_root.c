#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a tree node is the root
 *
 * @node: binary_tree_t * (pointer to the node)
 *
 * Return: 1 if node is the root, otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);

	return (0);
}
