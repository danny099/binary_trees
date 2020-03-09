#include "binary_trees.h"
/**
 * binary_tree_insert_left -creates a new node at left of parent node
 *
 *@parent: is a pointer to the parent node
 *@value: is a value of new node
 * Return: On succes pointer to the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (!parent)
		return (NULL);
	newNode = binary_tree_node(parent, value);

	if (!newNode)
		return (NULL);
	if (parent->left == NULL)
	{
		parent->left = newNode;
		newNode->parent = parent;
	}
	else
	{
		newNode->left = parent->left;
		parent->left = newNode;
		newNode->left->parent = newNode;
	}
	return (newNode);
}
