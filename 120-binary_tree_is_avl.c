#include "binary_trees.h"

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


int binary_tree_is_leaf(const binary_tree_t *node)
{
	int leaf = 0;

	if (node && !(node->left) && !(node->right))
		leaf = 1;

	return (leaf);
}


int check_parent(const binary_tree_t *tree)
{
	const binary_tree_t *prnt;
	const binary_tree_t *grand_prnt;

	if (tree == NULL || tree->parent == NULL || tree->parent->parent == NULL)
		return (1);

	prnt = tree->parent;
	grand_prnt = prnt->parent;

	while (prnt && grand_prnt)
	{
		if (prnt->n < grand_prnt->n && tree->n >= grand_prnt->n)
			return (0);

		if (prnt->n > grand_prnt->n && tree->n <= grand_prnt->n)
			return (0);

		prnt = prnt->parent;
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


int binary_tree_is_avl(const binary_tree_t *tree)
{
	if (tree && check_is_bst(tree) &&
	    (recursive_height(tree->left) - recursive_height(tree->right) == 0))
	{
		return (1);
	}

	return (0);
}
