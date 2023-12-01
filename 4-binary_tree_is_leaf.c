#include "binary_trees.h"

/**
 * binary_tree_is_leaf - _checks if a _node is a _leaf
 *
 * @node: pointer to the _node to _check
 * Return: 1 if node is a leaf, _otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	int _leaf = 0;

	if (node && !(node->left) && !(node->right))
		_leaf = 1;

	return (_leaf);
}
