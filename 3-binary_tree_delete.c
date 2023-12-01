#include "binary_trees.h"

/**
 * binary_tree_delete - _deletes an _entire binary tree
 *
 * @tree: _tree root
 * Return: no _return
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
