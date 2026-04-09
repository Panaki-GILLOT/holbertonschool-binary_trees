#include <stdlib.h>
#include "binary_trees.h"

/**
* _binary_tree_delete - deletes an entire binary tree
* @tree: pointer to the root node of the tree
*/
void _binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	_binary_tree_delete(tree->left);
	_binary_tree_delete(tree->right);
	free(tree);
}
