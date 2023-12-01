#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_nodes - Counts the number of nodes with at least one child
 *
 * @tree: Pointer to the root node
 *
 * Return: Number of nodes with at least one child
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL)
	{
		if (tree->right == NULL)
			return (0);
	}

	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
}
