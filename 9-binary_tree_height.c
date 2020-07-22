#include "binary_trees.h"
/**
* binary_tree_height - function
* @tree: ptr to root of tree to measure height
* Description: measure height of a binary tree
* Return: height of tree or 0 if NULL
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (recursive_height(tree, 0, 0));

}
/**
* recursive_height - function
* @tree: ptr to root of tree to traverse through
* @counter: variable to store traverseal steps
* @max: variable to store recursive_height
* Description: gets height of tree
* Return: height of tree
*/
size_t recursive_height(const binary_tree_t *tree, size_t counter, size_t max)
{
	if (tree->left != NULL)
		max = recursive_height(tree->left, counter + 1, max);

	if (tree->right != NULL)
		max = recursive_height(tree->right, counter + 1, max);

	if (max < counter)
		max = counter;
	return (max);
}
