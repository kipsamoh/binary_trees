#include "binary_trees.h"

/**
 * binary_tree_size - _measures the _size of a _binary tree
 *
 * @tree: _tree root
 * Return: size of the _tree or 0 if __tree is NULL;
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
