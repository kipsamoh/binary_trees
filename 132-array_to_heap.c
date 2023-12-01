#include "binary_trees.h"


heap_t *array_to_heap(int *array, size_t size)
{
	heap_t *tree;
	size_t _i;

	tree = NULL;

	for (_i = 0; _i < size; _i++)
	{
		heap_insert(&tree, array[_i]);
	}

	return (tree);
}
