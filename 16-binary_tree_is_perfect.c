#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Check if a binary tree node is perfect
 *
 * @tree: Pointer to root node
 *
 * Return: 1 if perfect, otherwise 0 (int)
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->parent)
	{
		if (height(tree->parent->left) != height(tree->parent->right))
			return (0);
		return (1);
	}
	if (!(tree->left) || !(tree->right))
		return (0);

	return (binary_tree_is_perfect(tree->left)
		&& binary_tree_is_perfect(tree->right));
}

/**
 * height - Subfunction used to avoid top level addition
 * else top function would be enough :)
 *
 * @node: Node
 *
 * Return: 1 if node
*/
size_t height(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (height(node->left) > height(node->right))
		return (height(node->left) + 1);
	else
		return (height(node->right) + 1);
}
