#include "tree.h"
#include "expr_assert.h"
#include <stdio.h>
#include <stdlib.h>

void test_createBSTree_will_create_a_empty_tree(){
	BSTree newTree = createBSTree();
	assert(newTree.root == NULL);
}

void test_createTreeNode_will_create_a_newNode(){
	int data = 0;
	TreeNode_ptr node1 = createTreeNode(data);
	assertEqual(node1->data,0);
}

void test_createTreeNode_will_create_left_node_null(){
	int data = 1;
	TreeNode_ptr newNode1 = createTreeNode(data);
	assert(newNode1->left == 0);
}

void test_createTreeNode_will_create_right_node_null(){
	int data = 1;
	TreeNode_ptr newNode1 = createTreeNode(data);
	assert(newNode1->right == 0);
}