#include "binary_trees.h"

/**
 * binary_tree_is_leaf - _checks if a _node is a _leaf
 *
 * @node: _pointer to the _node to _check
 * Return: 1 if node is a _leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	int _leaf = 0;

	if (node && !(node->left) && !(node->right))
		_leaf = 1;

	return (_leaf);
}

/**
 * binary_tree_is_parent_full - _checks if a node is a parent
 *
 * @node: pointer to the _node to check
 * Return: 1 if node is a _parent, otherwise 0
 */
int binary_tree_is_parent_full(const binary_tree_t *node)
{
	int _parent = 0;

	if (node && node->left && node->right)
		_parent = 1;

	return (_parent);
}


int height(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (tree == NULL)
		return (-1);

	left = height(tree->left);
	right = height(tree->right);

	if (left > right)
		return (left + 1);

	return (right + 1);
}


int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree && height(tree->left) == height(tree->right))
	{
		if (height(tree->left) == -1)
			return (1);

		if (binary_tree_is_leaf(tree->left) && binary_tree_is_leaf(tree->right))
			return (1);

		if (binary_tree_is_parent_full(tree))
			return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));
	}

	return (0);
}
