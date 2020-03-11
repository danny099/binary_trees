#include "binary_trees.h"
/**
 * binary_tree_size -  measures the size of a binary tree
 * @tree: node of tree
 * Return: size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int countRight = 0;
	int  countLeft = 0;

	if (tree == NULL)
		return (0);
	/* compute the nodes of each subtree */
	if (tree->left)
	{
		countLeft = binary_tree_size(tree->left);
	}
	if (tree->right)
	{
		countRight = binary_tree_size(tree->right);
	}

		return (countRight + countLeft + 1);
}
