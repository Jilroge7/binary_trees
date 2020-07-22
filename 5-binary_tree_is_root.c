#include "binary_trees.h"
/**
* binary_tree_is_root - function
* @node: node to check
* Description: check is node is root of tree
* Return: 1 if root, 0 if not a root
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
