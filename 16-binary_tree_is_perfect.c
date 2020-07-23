#include "binary_trees.h"
/**
* binary_tree_is_perfect - function
* @tree: tree to check
* Description: check if a binary tree is balanced and full
* Return: 1 if perfect, 0 otherwise
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height;

	if (tree == NULL)
		return (0);

	height = recursive_height(tree, 0, 0);

	if ((size_t)1 << height == binary_tree_leaves(tree))
		return (1);

	return (0);
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
