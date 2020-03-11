#include "binary_trees.h"
/**
 * binary_tree_preorder - prints the tree in preorder
 * @tree: root of tree
 * @func: pointer to a funt (funt print a node)
 * Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	/*pointer to a funt (funt print a node)*/
	func(tree->n);
	/* first print left subtree*/
	binary_tree_preorder(tree->left, func);
	/* second print right subtree*/
	binary_tree_preorder(tree->right, func);
}
