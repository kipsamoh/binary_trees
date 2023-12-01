#include "binary_trees.h"


avl_t *array_to_avl(int *array, size_t size)
{
	avl_t *_tree;
	size_t _i;

	_tree = NULL;

	for (_i = 0; _i < size; _i++)
	{
		avl_insert(&_tree, array[_i]);
	}

	if (_i == size)
		return (_tree);

	return (NULL);
}
