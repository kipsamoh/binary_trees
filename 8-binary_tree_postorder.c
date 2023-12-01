#include "binary_trees.h"

/**
 * binary_tree_postorder - goes _through a _binary tree using
 * post-order _traversal
 *
 * @tree: tree _root
 * @func: pointer to a function to _call for each _node
 * Return: no _return
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
