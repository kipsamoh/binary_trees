#include "binary_trees.h"

/**
 * recursive_height - _measures the _height of a _binary tree
 *
 * @tree: _tree root
 * Return: height
 */
size_t recursive_height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL)
		return (0);

	left = recursive_height(tree->left);
	right = recursive_height(tree->right);

	if (left > right)
		return (left + 1);

	return (right + 1);
}

/**
 * binary_tree_height - calls _recursive_height to _return the height
 * of a _binary tree
 *
 * @tree: tree root
 * Return: _height of the tree or 0 if _tree is NULL;
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (-1);

	return (recursive_height(tree) - 1);
}

/**
 * binary_tree_balance - _calls recursive_balance to _return the balance
 * of a binary tree
 *
 * @tree: tree root
 * Return: _balance factor of the _tree or 0 if tree is NULL;
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
