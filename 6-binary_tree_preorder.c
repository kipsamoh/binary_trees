#include "binary_trees.h"

/**
 * binary_tree_preorder - _goes through a binary tree using
 * pre-order _traversal
 *
 * @tree: tree root
 * @func: pointer to a _function to call for _each node
 * Return: no return
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);

	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
