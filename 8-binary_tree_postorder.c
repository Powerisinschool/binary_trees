#include "binary_trees.h"

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t *node;
	if (tree == NULL)
		return;

	node = (binary_tree_t *) tree;

	/* Get to the left end of the binary tree */
	while (node->left != NULL)
		node = node->left;

	while (node->parent != tree->parent)
	{
		binary_tree_postorder((const binary_tree_t *) node->right, func);
		func(node->n);
		node = node->parent;
	}

	binary_tree_postorder((const binary_tree_t *) node->right, func);
	func(node->n);
	node = node->parent;
}
