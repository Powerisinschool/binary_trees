#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverse through a binary tree by post-order
 *
 * @tree: const binary_tree_t * (pointer to the node)
 * @func: function to run
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
