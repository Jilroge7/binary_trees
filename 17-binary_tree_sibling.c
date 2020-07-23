#include "binary_trees.h"

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
