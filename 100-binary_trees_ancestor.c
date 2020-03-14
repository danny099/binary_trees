#include "binary_trees.h"
/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to first node
 * @second: pointer to second node
 * Return: pointer to lowest common ancestor node of the two given nodes
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *a = (binary_tree_t *)first;
	binary_tree_t *b = (binary_tree_t *)second;
	size_t depth_a, depth_b;

	if (!first || !second)
		return (NULL);

	depth_a = binary_tree_depth(a);
	depth_b = binary_tree_depth(b);

	for (; depth_b > depth_a; depth_b--)
		b = b->parent;
	for (; depth_a > depth_b; depth_b--)
		a = a->parent;
	while (a && b)
	{
		if (a == b)
			return (a);
		a = a->parent;
		b = b->parent;
	}
	return (NULL);
}
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
