#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: Pointer to the root node of the tree
 *
 * Return: the height of the tree
 *
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t hleft, hright;

	if (tree == NULL)
		return (0);


	if (tree->left == NULL)
	{
		if (tree->right == NULL)
			return (0);
	}

	hleft = binary_tree_height(tree->left);
	hright = binary_tree_height(tree->right);

	return (hleft > hright ? hleft + 1 : hright + 1);
}
