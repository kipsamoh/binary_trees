#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a _node is a leaf
 *
 * @node: _pointer to the _node to check
 * Return: 1 if _node is a _leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	int _leaf = 0;

	if (node && !(node->left) && !(node->right))
		_leaf = 1;

	return (_leaf);
}

/**
 * binary_tree_is_parent_full - checks _if a node is a parent
 *
 * @node: pointer to the node _to check
 * Return: 1 if node is a _parent, otherwise 0
 */
int binary_tree_is_parent_full(const binary_tree_t *node)
{
	int _parent = 0;

	if (node && node->left && node->right)
		_parent = 1;

	return (_parent);
}

/**
 * binary_tree_is_full - checks if a bin_ary tree is full
 *
 * @tree: tree _root
 * Return: 1 if tree is _full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (binary_tree_is_leaf(tree))
		return (1);

	if (binary_tree_is_parent_full(tree))
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	return (0);
}
