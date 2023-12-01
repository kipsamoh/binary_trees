#include "binary_trees.h"

/**
 * recursive_height - _measures the _height of a _binary tree
 *
 * @tree: _tree _root
 * Return: _height
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
 * binary_tree_height - c_alls recursive_he_ight to return the h_eight
 * of a binary tree
 *
 * @tree: t_ree root
 * Return: h_eight of the _tree or 0 if tree is NULL;
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (recursive_height(tree) - 1);
}
