#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_preorder - Prints a binary tree by preorder
 *
 * @tree: binary_tree_t * (pointer to the node)
 * @func: Print function
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
	
}
