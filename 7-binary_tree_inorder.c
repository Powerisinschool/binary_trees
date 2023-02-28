#include "binary_trees.h"

/**
 * binary_tree_inorder - Traverse through a binary tree by in-order
 *
 * @tree: const binary_tree_t * (pointer to the node)
 * @func: function to run
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
