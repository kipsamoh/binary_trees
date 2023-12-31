#include "binary_trees.h"

/**
 * recursive_depth - _measures the _de_pth of a _node in a _binary tree
 *
 * @tree: _tree _root
 * Return: _depths of a _nodes in a _binary _tree
 */
size_t recursive_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (-1);

	return (recursive_depth(tree->parent) + 1);
}

/**
 * binary_tree_depth - _calls _ecursive_depth to return the depth
 * of a _node in a _binary tree
 *
 * @tree: _tree _root
 * Return: _depth of _the tree or 0 if _tree is NULL;
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (recursive_depth(tree));
}
