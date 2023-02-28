#include <stdio.h>
#include "binary_trees.h"

void print_node(binary_tree_t *node, void (*func)(int));

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;

	(void) func;

	print_node((binary_tree_t *) tree, func);
}

void print_node(binary_tree_t *node, void (*func)(int))
{
	if (node == NULL)
		return;

	func(node->n);
	print_node(node->left, func);
	print_node(node->right, func);
}
