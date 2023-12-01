#include "binary_trees.h"

int binary_tree_is_leaf(const binary_tree_t *node)
{
	int leaf = 0;

	if (node && !(node->left) && !(node->right))
		leaf = 1;

	return (leaf);
}



int check_parent(const binary_tree_t *tree)
{
	const binary_tree_t *_prnt;
	const binary_tree_t *grand_prnt;

	if (tree == NULL || tree->parent == NULL || tree->parent->parent == NULL)
		return (1);

	_prnt = tree->parent;
	grand_prnt = prnt->parent;

	while (_prnt && grand_prnt)
	{
		if (_prnt->n < grand_prnt->n && tree->n >= grand_prnt->n)
			return (0);

		if (_prnt->n > grand_prnt->n && tree->n <= grand_prnt->n)
			return (0);

		_prnt = _prnt->parent;
		grand_prnt = _prnt->parent;
	}

	return (1);
}



int check_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (1);

	if (binary_tree_is_leaf(tree))
		return (1);

	if (tree->left && tree->left->n >= tree->n)
		return (0);

	if (tree->right && tree->right->n <= tree->n)
		return (0);

	if (!check_parent(tree->left) || !check_parent(tree->right))
		return (0);

	return (check_is_bst(tree->left) && check_is_bst(tree->right));
}


int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (check_is_bst(tree));
}
