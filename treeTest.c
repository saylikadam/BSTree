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

void test_insert_will_add_a_node_into_tree_if_root_node_is_null(){
	int data = 10,result;
	BSTree newTree = createBSTree();
	assert(newTree.root == NULL);
	result = insert(&newTree,data);
	assertEqual(newTree.root->data,10);
}

void test_insert_will_add_a_node_into_tree_if_root_node_is_not_null(){
	BSTree newTree = createBSTree();
	insert(&newTree,100);
	insert(&newTree,200);
	assertEqual(newTree.root->data,100);
	assertEqual((int)newTree.root->left,0);
	assertEqual(newTree.root->right->data,200);

}

void test_insert_will_add_node_into_left_and_right_side_of_tree(){
	BSTree newTree = createBSTree();
	insert(&newTree,100);
	insert(&newTree,200);
	insert(&newTree,50);
	assertEqual(newTree.root->data,100);
	assertEqual(newTree.root->left->data,50);
	assertEqual(newTree.root->right->data,200);
}

void test_insert_will_add_node_to_the_leaf_node_of_a_tree(){
	BSTree newTree = createBSTree();
	insert(&newTree,100);
	insert(&newTree,200);
	insert(&newTree,70);
	insert(&newTree,80);
	insert(&newTree,50);
	assertEqual(newTree.root->data,100);
	assertEqual(newTree.root->left->data,70);
	assertEqual(newTree.root->right->data,200);
	assertEqual(newTree.root->left->left->data,50);
	assertEqual(newTree.root->left->right->data,80);

}