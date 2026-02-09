#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#include <stdlib.h>
#include <stdio.h>

// node structure for a binary tree
typedef struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
} TreeNode;

// create a new tree node with a given value
TreeNode* create_tree_node(int val);

// insert a value into the binary search tree
TreeNode* insert_tree(TreeNode* root, int val);

// inorder traversal of the tree
void inorder_traversal(TreeNode* root);

// preorder traversal of the tree
void preorder_traversal(TreeNode* root);

// postorder traversal of the tree
void postorder_traversal(TreeNode* root);

// free all the nodes in the tree to prevent memory leaks
void delete_tree(TreeNode* root);

#endif