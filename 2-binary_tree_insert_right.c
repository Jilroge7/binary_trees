#include "binary_trees.h"
/**
* binary_tree_insert_right - function
* @parent: ptr to node to insert right-child in
* @value: value of new node
* Description: inserts a node as the right-child of another node
* Return: newnode or NULL if fail
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

	binary_tree_t *tempNode;

	tempNode = binary_tree_node(parent, value);
	if (tempNode == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		parent->right->parent = tempNode;
		tempNode->right = parent->right;
		parent->right = tempNode;
	}
	else
		parent->right = tempNode;
	return (tempNode);
}
