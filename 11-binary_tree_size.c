#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_size - Measures the size of a binary tree
 *
 * @tree: Pointer to the root node
 *
 * Return: Size of the tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_left, size_right;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL)
	{
		if (tree->right == NULL)
			return (1);
	}
	size_left = binary_tree_size(tree->left);
	size_right = binary_tree_size(tree->right);
	
	return ((size_left + size_right) + 1);
}
