#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of the node
 * @node: node to find uncle of
 *
 * Return: pointer to uncle, NULL otherwise
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *p;

	if (node == NULL)
		return (NULL);

	if (node->parent == NULL)
		return (NULL);

	if (node->parent->parent == NULL)
		return (NULL);

	p = node->parent->parent;

	if (p->left != NULL && p->left != node->parent)
		return (p->left);

	if (p->right != NULL && p->right != node->parent)
		return (p->right);

	return (NULL);
}
