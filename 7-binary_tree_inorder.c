#include "binary_trees.h"

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
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
		func(node->n);
		binary_tree_inorder((const binary_tree_t *) node->right, func);
		node = node->parent;
	}

	func(node->n);
	binary_tree_inorder((const binary_tree_t *) node->right, func);
	node = node->parent;
}
