#include "binary_trees.h"
/**
* binary_tree_nodes - function
* @tree: tree to count nodes
* Description: count number of nodes in binary tree
* Return: number of nodes or 0 if tree is empty
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		counter += binary_tree_nodes(tree->left);

	if (tree->right != NULL)
		counter += binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
		return (counter + 1);
	else
		return (counter);

}
