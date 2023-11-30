#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * binary_tree_depth - measures the depth of a binary tree
 *
 * @tree: Pointer to the root node of the tree
 *
 * Return: the height of the tree
 *
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL || tree->parent == NULL)
		return (0);

	depth = binary_tree_depth(tree->parent);

	return (depth + 1);

}
