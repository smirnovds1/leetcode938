#pragma once

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode()
        : val(0)
        , left(nullptr)
        , right(nullptr)
    {
    }
    TreeNode(int x)
        : val(x)
        , left(nullptr)
        , right(nullptr)
    {
    }
    TreeNode(int x, TreeNode* left, TreeNode* right)
        : val(x)
        , left(left)
        , right(right)
    {
    }
};

void insertTreeNode(TreeNode* root, int value)
{
    if (value == root->val) {
        return;
    }
    if (value > root->val) {
        if (root->right == nullptr) {
            root->right = new TreeNode(value);
            return;
        } else {
            insertTreeNode(root->right, value);
        }
    }
    if (value < root->val) {
        if (root->left == nullptr) {
            root->left = new TreeNode(value);
            return;
        } else {
            insertTreeNode(root->left, value);
        }
    }
}
