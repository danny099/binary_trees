#include "binary_trees.h"

/**
 * binary_tree_is_root - detect if a node is a root
 * @node: pointer to a node
 * Return: 0 if is false or 1 if is true
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node->left != NULL && node->right != NULL && node->parent == NULL)
		return (1);
	else
		return (0);
}
