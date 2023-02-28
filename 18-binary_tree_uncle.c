#include "binary_trees.h"


binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *n_left, *n_right;

	if (!node || !(node->parent))
		return (NULL);

	if (!(node->parent->left) || !(node->parent->right) || !(node->parent->parent))
		return (NULL);

	if (!(node->parent->parent->left) || !(node->parent->parent->right))
		return (NULL);

	n_left = node->parent->parent->left;
	n_right = node->parent->parent->right;

	if (n_left == node->parent)
		return (n_right);

	return (n_left);
}
