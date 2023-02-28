#include "binary_trees.h"

/**
 * binary_tree_depth - Find the depth of a node in a binary tree
 * 
 * @tree: Pointer to the node in the tree
 * 
 * Return: Depth of node (size_t)
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	const binary_tree_t *node;
	size_t i = 0;

	if (!tree)
		return (0);

	node = tree;
	while (node->parent)
	{
		node = node->parent;
		i++;
	}

	return (i);
}
