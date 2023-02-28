#include "binary_trees.h"

/**
 * binary_tree_nodes - Get number of filled nodes in a binary tree from a node
 *
 * @tree: Pointer to node
 *
 * Return: Number of nodes in tree
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->left || tree->right)
		return (binary_tree_nodes(tree->left)
			+ binary_tree_nodes(tree->right) + 1);
	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
