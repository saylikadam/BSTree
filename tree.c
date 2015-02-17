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

int insert(BSTree *newTree,int data){
	if(newTree->root == NULL)
		newTree->root = createTreeNode(data);
		return 1;
}
