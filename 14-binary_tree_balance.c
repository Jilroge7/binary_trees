#include "binary_trees.h"
/**
* binary_tree_balance - function
* @tree: tree to calculate balance of
* Description: calc balance of a binary tree
* Return: balance value, 0 if tree is balanced
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
* balance - function
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
