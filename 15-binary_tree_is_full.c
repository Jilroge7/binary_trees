#include "binary_trees.h"
/**
* binary_tree_leaves - function
* @tree: tree to count leaves
* Description: count number of leaves in binary tree
* Return: number of leaves or 0 if tree is empty
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

	if ((tree->left != NULL && tree->right != NULL) || (tree->left == NULL && tree->right == NULL))
		return (1);
	else
		return (0);
}
