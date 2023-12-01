#include "binary_trees.h"

/**
 * binary_tree_inorder - goes through a _binary tree using
 * in-order _traversal
 *
 * @tree: tree _root
 * @func: _pointer to a _function to call for _each node
 * Return: no _return
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
