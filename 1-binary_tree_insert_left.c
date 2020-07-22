#include "binary_trees.h"
/**
* binary_tree_insert_left - function
* @parent: ptr to node to insert left-child in
* @value: valueof new node
* Description: insert a node as the left-child of another node
* Return: New node or NULL if fail
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *tempNode;

	tempNode = binary_tree_node(parent, value);
	if (tempNode == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		parent->left->parent = tempNode;
		tempNode->left = parent->left;
		parent->left = tempNode;
	}
	else
		parent->left = tempNode;
	return (tempNode);
}
