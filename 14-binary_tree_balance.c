#include "binary_trees.h"
/**
* binary_tree_leaves - function
* @tree: tree to count leaves
* Description: count number of leaves in binary tree
* Return: number of leaves or 0 if tree is empty
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int counterL = 0, counterR = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		counterL = balance(tree->left, 1, 1);

	if (tree->right != NULL)
		counterR = balance(tree->right, 1, 1);

	return (counterL - counterR);
}

/**
* recursive_height - function
* @tree: ptr to root of tree to traverse through
* @counter: variable to store traverseal steps
* @max: variable to store recursive_height
* Description: gets height of tree
* Return: height of tree
*/
int balance(const binary_tree_t *tree, int counter, int max)
{
	if (tree->left != NULL)
		max = balance(tree->left, counter + 1, max);

	if (tree->right != NULL)
		max = balance(tree->right, counter + 1, max);

	if (max < counter)
		max = counter;
	return (max);
}
