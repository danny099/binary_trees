#include "binary_trees.h"

/**
 * binary_tree_delete - delete a tree
 * @tree: root of tree
 * Return: void
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	/* first delete both subtrees */
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	/* free the nodes*/
	free(tree);
}
