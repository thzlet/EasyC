#include "binary_tree.h"

TreeNode* create_tree_node(int val) {
    TreeNode* node = (TreeNode*) malloc(sizeof(TreeNode));
    if(!node) return NULL;
    node->data = val;
    node->left = node->right = NULL;
    return node;
}

TreeNode* insert_tree(TreeNode* root, int val) {
    if(!root) return create_tree_node(val);
    if(val < root->data)
        root->left = insert_tree(root->left, val);
    else
        root->right = insert_tree(root->right, val);
    return root;
}

void inorder_traversal(TreeNode* root) {
    if(!root) return;
    inorder_traversal(root->left);
    printf("%d ", root->data);
    inorder_traversal(root->right);
}

void preorder_traversal(TreeNode* root) {
    if(!root) return;
    printf("%d ", root->data);
    preorder_traversal(root->left);
    preorder_traversal(root->right);
}

void postorder_traversal(TreeNode* root) {
    if(!root) return;
    postorder_traversal(root->left);
    postorder_traversal(root->right);
    printf("%d ", root->data);
}

void delete_tree(TreeNode* root) {
    if(!root) return;
    delete_tree(root->left);
    delete_tree(root->right);
    free(root);
}