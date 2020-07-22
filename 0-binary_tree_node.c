#include "binary_trees.h"
/**
* binary_tree_node - function
* @parent: ptr to parent node of node to creat
* @value: value to put in new node
* Description: create a binary tree node
* Return: New node or NULL on fail
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;
	newNode->parent = parent;
	return (newNode);
}
