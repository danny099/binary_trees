#include "binary_trees.h"
/**
 * binary_tree_inorder - prints the tree in inorder
 * @tree: root of tree
 * @func: pointer to a funt (funt print a node)
 * Return: void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/* first print left subtree*/
	binary_tree_inorder(tree->left, func);
	/*pointer to a funt (funt print a node)*/
	func(tree->n);
	/* second print right subtree*/
	binary_tree_inorder(tree->right, func);
}
