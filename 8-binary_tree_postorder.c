#include "binary_trees.h"
/**
* binary_tree_postorder - function
* @tree: ptr to root of tree to traverse
* @func: ptr to function to call
* Description: traverse through binary tree using postorder
* Return: nothing
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	if (tree->left != NULL)
		binary_tree_postorder(tree->left, func);

	if (tree->right != NULL)
		binary_tree_postorder(tree->right, func);

	func(tree->n);

}
