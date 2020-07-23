#include "binary_trees.h"
/**
* binary_tree_leaves - function
* @tree: tree to count leaves
* Description: count number of leaves in binary tree
* Return: number of leaves or 0 if tree is empty
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		counter += binary_tree_leaves(tree->left);

	if (tree->right != NULL)
		counter += binary_tree_leaves(tree->right);

	if (tree->left == NULL && tree->right == NULL)
		return (counter + 1);
	else
		return (counter);

}
