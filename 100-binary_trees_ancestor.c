#include "binary_trees.h"
/**
* binary_trees_ancestor - function
* @first: ptr to first node
* @second: ptr to second node
* Description: find lowest common ancestor for two nodes
* Return: ptr to the ancestor or NULL if fail
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
	const binary_tree_t *second)
{
	size_t depthFirst, depthSecond;

	if (first == NULL || second == NULL)
		return (NULL);

	if (first == second)
		return (first->left->parent);

	depthFirst = binary_tree_depth(first);
	depthSecond = binary_tree_depth(second);

	if (depthFirst < depthSecond)
		return (binary_trees_ancestor(first, second->parent));
	else if (depthSecond < depthFirst)
		return (binary_trees_ancestor(first->parent, second));
	else
		return (binary_trees_ancestor(first->parent, second->parent));

}

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
