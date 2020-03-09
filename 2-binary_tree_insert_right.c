#include "binary_trees.h"
/**
 * binary_tree_insert_right -creates a new node at right of parent node
 *
 *@parent: is a pointer to the parent node
 *@value: is a value of new node
 * Return: On succes pointer to the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (!parent)
		return (NULL);
	newNode = binary_tree_node(parent, value);

	if (!newNode)
		return (NULL);
	if (parent->right == NULL)
	{
		parent->right = newNode;
		newNode->parent = parent;
	}
	else
	{
		newNode->right = parent->right;
		parent->right = newNode;
		newNode->right->parent = newNode;
	}
	return (newNode);
}
