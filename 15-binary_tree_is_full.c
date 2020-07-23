#include "binary_trees.h"
/**
* binary_tree_is_full - function
* @tree: tree to check
* Description: check if a binary tree is full
* Return: 1 if tree is full, 0 otherwise
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		if (binary_tree_is_full(tree->left) == 0)
			return (0);

	if (tree->right != NULL)
		if (binary_tree_is_full(tree->right) == 0)
			return (0);

	if (tree->left != NULL && tree->right != NULL)
		return (1);
	else if (tree->left == NULL && tree->right == NULL)
		return (1);
	else
		return (0);
}
