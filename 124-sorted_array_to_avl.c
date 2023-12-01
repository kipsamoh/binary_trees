#include "binary_trees.h"


void create_tree(avl_t **node, int *array, size_t size, int mode)
{
	size_t middle;

	if (size == 0)
		return;

	middle = (size / 2);
	middle = (size % 2 == 0) ? middle - 1 : middle;

	if (mode == 1)
	{
		(*node)->left = binary_tree_node(*node, array[middle]);
		create_tree(&((*node)->left), array, middle, 1);
		create_tree(&((*node)->left), array + middle + 1, (size - 1 - middle), 2);
	}
	else
	{
		(*node)->right = binary_tree_node(*node, array[middle]);
		create_tree(&((*node)->right), array, middle, 1);
		create_tree(&((*node)->right), array + middle + 1, (size - 1 - middle), 2);
	}
}


avl_t *sorted_array_to_avl(int *array, size_t size)
{
	avl_t *root;
	size_t _middle;

	root = NULL;

	if (size == 0)
		return (NULL);

	_middle = (size / 2);

	_middle = (size % 2 == 0) ? _middle - 1 : _middle;

	root = binary_tree_node(root, array[_middle]);

	create_tree(&root, array, _middle, 1);
	create_tree(&root, array + _middle + 1, (size - 1 - _middle), 2);

	return (root);
}
