// @algorithm @lc id=1000019 lang=cpp
// @title binode-lcci

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test([4,2,5,1,3,null,6,0])=[0,null,1,null,2,null,3,null,4,null,5,null,6]
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
    TreeNode *convertBiNode(TreeNode *root)
    {
        if (root == nullptr)
            return nullptr;
        return inOrder(root);
    }

private:
    TreeNode *ans = new TreeNode(-1), *cur = ans;
    TreeNode *inOrder(TreeNode *root)
    {
        if (root)
        {
            inOrder(root->left);
            root->left = nullptr;
            cur->right = root;
            cur = root;
            inOrder(root->right);
        }
        return ans->right;
    }
};