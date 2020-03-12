#include "binary_trees.h"
/**
 * binary_tree_height - get the heigh of a tree
 * @tree: input tree
 * Return: tree heigh
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (measure(tree) - 1);
}
/**
 * measure - helper heigh to measure func
 * @tree: tree
 * Return: the heigh
 */
size_t measure(const binary_tree_t *tree)
{
	size_t a, b;

	if (!tree)
		return (0);

	a = measure(tree->left);
	b = measure(tree->right);
	return (max(a, b) + 1);
}
/**
 * max - helper
 * @a: the first number
 * @b: the second number
 * Return: height of tree
 */
int max(int a, int b)
{
	if (a > b)
		return (a);
	else
		return (b);
}
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
/**
 * binary_tree_is_perfect - a function that checks if a binary tree is perfect
 * @tree: the tree
 * Return: 1, 0 if true or false
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int n, h;

	if (!tree)
		return (0);
	n = (int)binary_tree_size(tree);
	h = binary_tree_height(tree);
	return (n == (2 << h) - 1);
}
