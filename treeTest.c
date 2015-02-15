#include "tree.h"
#include "expr_assert.h"
#include <stdio.h>
#include <stdlib.h>

void test_createBSTree_will_create_a_empty_tree(){
	BSTree newTree = createBSTree();
	assert(newTree.root == NULL);
}

