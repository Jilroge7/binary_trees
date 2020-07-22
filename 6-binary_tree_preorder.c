#include "binary_trees.h"
/**
* binary_tree_preorder - function
* @tree: ptr to root node to traverse
* @func: ptr to function to call
* Description: traverse through a binary tree using pre-order
* Return: nothing
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);

	if (tree->left != NULL)
		binary_tree_preorder(tree->left, func);

	if (tree->right != NULL)
		binary_tree_preorder(tree->right, func);


}
