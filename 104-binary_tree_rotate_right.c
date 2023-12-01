#include "binary_trees.h"

/**
 * binary_tree_rotate_right - _performs a _right-rotation on a __binary tree
 *
 * @tree: _-tree root
 * Return: pointer to the new root
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *_new_root;

	if (tree == NULL || tree->left == NULL)
		return (tree);

	_new_root = tree->left;

	if (_new_root->right)
	{
		tree->left = _new_root->right;
		_new_root->right->parent = tree;
	}
	else
	{
		tree->left = NULL;
	}

	_new_root->right = tree;
	_new_root->parent = _tree->parent;
	tree->parent = _new_root;

	return (_new_root);
}
