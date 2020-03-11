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
	/* compute the depth of each subtree */
	if (tree->left)
	{
		countLeft = binary_tree_height(tree->left);
	}
	if (tree->right)
	{
		countRight = binary_tree_height(tree->right);
	}

	/* use the larger one */
	if (countLeft > countRight)
		return (countLeft + 1);
	else
		return (countRight + 1);
}
