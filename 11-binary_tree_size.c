#include "binary_trees.h"
/**
* binary_tree_size - function
* @tree: tree to count nodes
* Description: count number of nodes in tree
* Return: number of nodes or 0 if empty
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));

}
