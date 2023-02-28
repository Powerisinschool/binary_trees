#include "binary_trees.h"

/**
 * binary_tree_insert_right - Creates a new node to the right of a binary tree
 *
 * @parent: binary_tree_t * (pointer to the top node of the tree)
 * @value: int
 *
 * Return: pointer to the new node created
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = binary_tree_node(parent, value);

	if (parent == NULL)
		return (NULL);

	if (node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		node->right = parent->right;
		parent->right->parent = node;
	}

	parent->right = node;

	return (node);
}
