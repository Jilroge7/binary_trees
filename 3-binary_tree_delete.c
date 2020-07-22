#include "binary_trees.h"
/**
* binary_tree_delete - function
* @tree: tree to delete
* Description: delete a complete binary tree
* Return: nothing
*/
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *tempNode = tree;

	while (tempNode != NULL)
	{
		if (tempNode->left != NULL)
		{
			tempNode = tempNode->left;
			continue;
		}

		if (tempNode->right != NULL)
		{
			tempNode = tempNode->right;
			continue;
		}

		if (tempNode->parent == NULL)
		{
			free(tempNode);
			return;
		}
		tempNode = tempNode->parent;
		if (tempNode->left != NULL)
		{
			free(tempNode->left);
			tempNode->left = NULL;
		}
		else
		{
			free(tempNode->right);
			tempNode->right = NULL;
		}
	}
}
