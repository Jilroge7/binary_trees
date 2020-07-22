#include "binary_trees.h"
/**
* binary_tree_depth - function
* @tree: ptr to root of tree to measure
* Description: measures the depth of a binary tree
* Return: depth of binary tree or 0 if NULL
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	binary_tree_t *temp;
	size_t counter = 1;

	if (tree == NULL || tree->parent == NULL)
		return (0);

	temp = tree->parent;

	while (temp->parent != NULL)
	{
		temp = temp->parent;
		counter++;
	}
	return (counter);

}
