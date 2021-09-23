// @algorithm @lc id=100288 lang=cpp
// @title er-cha-shu-de-jing-xiang-lcof

#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution
{
public:
    TreeNode *mirrorTree(TreeNode *root)
    {
        if (root == nullptr)
        {
            return root;
        }
        preorder(root);
        return root;
    }
    void preorder(TreeNode *&root)
    {
        if (root)
        {
            swap(root->left, root->right);
            preorder(root->left);
            preorder(root->right);
        }
    }
};