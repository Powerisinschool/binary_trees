#include "binary_trees.h"

/**
 * binary_tree_delete - Delete a binary tree,
 * freeing all it's children from memory
 *
 * @tree: binary_tree_t * (pointer to the top node of the tree)
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
