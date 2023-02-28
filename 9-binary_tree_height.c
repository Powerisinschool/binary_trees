#include "binary_trees.h"

/**
 * height - Subfunction used to avoid top level addition
 * else top function would be enough :)
 *
 * @node: Node
 *
 * Return: 1 if node
*/
size_t height(const binary_tree_t *node);

/**
 * binary_tree_height - Find the height of a binary tree
 *
 * @tree: Pointer to the root node of tree
 *
 * Return: Height of tree (size_t)
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (height(tree->left) > height(tree->right))
		return (height(tree->left));
	else
		return (height(tree->right));
}

size_t height(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (height(node->left) > height(node->right))
		return (height(node->left) + 1);
	else
		return (height(node->right) + 1);

}
