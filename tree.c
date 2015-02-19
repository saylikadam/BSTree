#include "tree.h"
#include <stdlib.h>
#include <stdio.h>

BSTree createBSTree(void){
	BSTree newTree;
	newTree.root = 0;
	return newTree;
}

TreeNode_ptr createTreeNode(int data){
	TreeNode_ptr newNode = malloc( sizeof(TreeNode));
	newNode->data = data;
	newNode->left = 0;
	newNode->right = 0;
	return newNode;
}

TreeNode_ptr insertNode(TreeNode_ptr root ,int data){
	if(root == NULL)
		return createTreeNode(data);
	if(data<root->data)
		root->left = insertNode(root->left,data);
	else
		root->right = insertNode(root->right,data);
	return root;
}
int insert(BSTree *newTree,int data){
	newTree->root = insertNode(newTree->root, data);
		if(newTree->root)
			return 1;
		return 0;
}
