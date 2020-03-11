#include "binary_trees.h"
/**
 * binary_tree_node - function that creates a new node
 *
 *@parent: is a pointer to the parent node
 *@value: is a value of new node
 * Return: On succes pointer to the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (!newNode)
	{
		return (NULL);
	}

	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;
	newNode->parent = parent;
	return (newNode);
}
