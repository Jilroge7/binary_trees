#include "binary_trees.h"
/**
* binary_tree_levelorder - function
* @tree: ptr to root node of tree to traverse
* @func:ptr to a func to call each node
* Description: traverse through a binary tree using levelorder
* Return: nothing
*/
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	if (tree->parent == NULL)
		func(tree->n);

	if (tree->parent != NULL && tree->parent->right != tree)
	{
		func(tree->n);

		if (tree->left != NULL)
		{
			if (tree->parent != NULL)
				func(binary_tree_sibling(tree->left->parent)->n);
		}
		else if (tree->right != NULL)
		{
			if (tree->parent != NULL)
				func(binary_tree_sibling(tree->right->parent)->n);
		}
		else if (tree->parent != NULL)
		{
			if (tree->parent->left == tree)
				func(binary_tree_sibling(tree->parent->left)->n);
			else if (tree->parent->right == tree)
				func(binary_tree_sibling(tree->parent->right)->n);
		}

	}
	if (tree->left != NULL)
		binary_tree_levelorder(tree->left, func);

	if (tree->right != NULL)
		binary_tree_levelorder(tree->right, func);


}
/**
 * binary_tree_sibling - finds the sibling of the node
 * @node: node to find sibling of
 *
 * Return: pointer to sibling, NULL otherwise
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *p;

	if (node == NULL)
		return (NULL);

	if (node->parent == NULL)
		return (NULL);

	p = node->parent;

	if (p->left != NULL && p->left != node)
		return (p->left);

	if (p->right != NULL && p->right != node)
		return (p->right);

	return (NULL);
}
