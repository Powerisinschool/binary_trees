#include "binary_trees.h"

void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *tmp;
	binary_tree_t *next;

	if (tree == NULL)
		return;

	delete_right(tree);
}
