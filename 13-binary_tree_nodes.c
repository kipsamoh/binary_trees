#include "binary_trees.h"

/**
 * binary_tree_is_parent - _checks if a _node is a _parent
 *
 * @node: pointer to the _node to check
 * Return: 1 if node is a _parent, otherwise 0
 */
int binary_tree_is_parent(const binary_tree_t *node)
{
	int _parent = 0;

	if (node && (node->left || node->right))
		_parent = 1;

	return (_parent);
}

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (binary_tree_is_parent(tree))
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);

	return (0);
}
