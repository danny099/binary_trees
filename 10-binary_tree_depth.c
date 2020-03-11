#include "binary_trees.h"
/**
 * binary_tree_depth -  measures the depth of a binary tree
 * @tree: node of tree
 * Return: size
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int count = 0;

	if (tree == NULL)
		return (0);
    /* compute the depth of each subtree */
	if (tree->parent != NULL)
		count = 1 + binary_tree_depth(tree->parent);

	return (count);
}
