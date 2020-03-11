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
 * binary_tree_balance - function that measures the balance factor
 * of a binary tree
 * @tree: tree
 * Return: measure the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int a, b;

	if (!tree)
		return (0);
	a = (tree->left)
		? (int)binary_tree_height(tree->left)
		: -1;
	b = (tree->right)
		? (int)binary_tree_height(tree->right)
		: -1;
	return (a - b);
}
