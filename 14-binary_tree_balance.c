#include "binary_trees.h"

/**
 * binary_tree_balance - Find balance of a binary tree from a node
 *
 * @tree: Pointer to root node
 *
 * Return: Balance factor (int)
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (height(tree->left) - height(tree->right));
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