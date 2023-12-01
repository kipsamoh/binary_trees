#include "binary_trees.h"

/**
 * binary_tree_rotate_left - _performs a left-rotation on a __binary tree
 *
 * @tree: __tree root
 * Return: __pointer to the __new __root
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *_new_root;

	if (tree == NULL || tree->right == NULL)
		return (tree);

	_new_root = tree->right;

	if (_new_root->left)
	{
		tree->right = _new_root->left;
		_new_root->left->parent = tree;
	}
	else
	{
		tree->right = NULL;
	}

	_new_root->left = tree;
	_new_root->parent = tree->parent;
	tree->parent = _new_root;

	return (_new_root);
}
