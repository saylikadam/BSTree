typedef struct treeNode TreeNode;
typedef struct bsTree BSTree;

typedef TreeNode* TreeNode_ptr;

struct bsTree{
	TreeNode_ptr root; 
};

struct treeNode{
	int data;
	TreeNode_ptr left;
	TreeNode_ptr right;
};


BSTree createBSTree(void);
TreeNode_ptr createTreeNode(int);