#include "binary_trees.h"

void delete_node(binary_tree_t *node);

void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *tmp;
	binary_tree_t *next;

	if (tree == NULL)
		return;

	delete_node(tree->left);
	delete_node(tree->right);
	free(tree);
}

void delete_node(binary_tree_t *node)
{
    if (node == NULL)
        return;
    delete_node(node->left);
    delete_node(node->right);
    free(node);
}
