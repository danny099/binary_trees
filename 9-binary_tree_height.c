#include "binary_trees.h"
/**
 * binary_tree_height -  measures the height of a binary tree
 * @tree: node of tree
 * Return: size
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int countRight = 0;
	int  countLeft = 0;

	if (tree == NULL)
		return (0);
	/* compute the height of each subtree */
	if (tree->left)
	{
		countLeft = 1 + binary_tree_height(tree->left);
	}
	if (tree->right)
	{
		countRight = 1 + binary_tree_height(tree->right);
	}

	/* use the larger one */
	if (countLeft > countRight)
		return (countLeft);
	else
		return (countRight);
}
