#include "binary_trees.h"
/**
* binary_tree_is_leaf - function
* @node: node to check
* Description: check if node is a leaf
* Return: 1 is leaf, 0 is not leaf
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left != NULL || node->right != NULL)
		return (0);
	else
		return (1);
}
