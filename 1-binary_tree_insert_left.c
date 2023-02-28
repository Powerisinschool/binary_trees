#include "binary_trees.h"

/**
 * binary_tree_insert_left - Creates a new node to the left of a binary tree
 *
 * @parent: binary_tree_t * (pointer to the top node of the tree)
 * @value: int
 *
 * Return: pointer to the new node created
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);

	binary_tree_t *node = binary_tree_node(parent, value);

	if (node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		node->left = parent->left;
		parent->left->parent = node;
	}

	parent->left = node;

	return (node);
}
