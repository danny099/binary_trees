#include "binary_trees.h"

/**
 * binary_tree_is_leaf - detect if a node is a leaf
 * @node: pointer to a node
 * Return: 0 if is false or 1 if is true
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
