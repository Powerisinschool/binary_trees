#include "binary_trees.h"

/**
 * binary_tree_is_full - Check if a binary tree node is full
 *
 * @tree: Pointer to root node
 *
 * Return: 1 if full, otherwise 0 (int)
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!(tree->left) && !(tree->right))
		return (1);
	if (!(tree->left) || !(tree->right))
		return (0);

	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
