#include "binary_trees.h"

/**
 * binary_tree_sibling - Find sibling of node in binary tree
 *
 * @node: Pointer to node
 *
 * Return: Pointer to sibling, otherwise NULL (binary_tree_t *)
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *n_left, *n_right;

	if (!node || !(node->parent))
		return (NULL);

	if (!(node->parent->left) || !(node->parent->right))
		return (NULL);

	n_left = node->parent->left;
	n_right = node->parent->right;

	if (n_left == node)
		return (n_right);

	return (n_left);
}
