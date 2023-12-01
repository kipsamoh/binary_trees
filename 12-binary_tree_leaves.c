#include "binary_trees.h"


int binary_tree_is_leaf(const binary_tree_t *node)
{
	int _leaf = 0;

	if (node && !(node->left) && !(node->right))
		_leaf = 1;

	return (_leaf);
}


size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (binary_tree_is_leaf(tree))
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
