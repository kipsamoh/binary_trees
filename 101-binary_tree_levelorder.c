#include "binary_trees.h"

/**
 * recursive_height - _measures th_e heig_ht of a _binary tree
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
 * print_level - _prints nodes at the _same level
 *
 * @tree: _tree root
 * @level: _level _node
 * @func: _pointer to a _function
 * Return: no _return
 */
void print_level(const binary_tree_t *tree, int level, void (*func)(int))
{
	if (tree == NULL)
		return;

	if (level == 1)
		func(tree->n);
	else if (level > 1)
	{
		print_level(tree->left, level - 1, func);
		print_level(tree->right, level - 1, func);
	}
}

/**
 * binary_tree_levelorder - _prints _data in _level-order _traversal
 *
 * @tree: _tree root
 * @func: _pointer to a _function
 * Return: no return
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t _height;
	size_t _i;

	if (tree == NULL || func == NULL)
		return;

	_height = recursive_height(tree);

	for (_i = 1; _i <= _height; _i++)
		print_level(tree, _i, func);
}
