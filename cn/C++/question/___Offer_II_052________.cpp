// @algorithm @lc id=1000311 lang=cpp
// @title NYBBNL

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test([5,3,6,2,4,null,8,1,null,null,null,7,9])=[1,null,2,null,3,null,4,null,5,null,6,null,7,null,8,null,9]
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    TreeNode *increasingBST(TreeNode *root)
    {
        if (root == nullptr)
            return root;
        inOrder(root);
        return res->right;
    }

private:
    TreeNode *dummy = new TreeNode(-1);
    TreeNode *res = dummy;
    void inOrder(TreeNode *root)
    {
        if (root == nullptr)
            return;
        inOrder(root->left);
        dummy->right = root;
        dummy->right->left = nullptr;
        dummy = root;
        inOrder(root->right);
    }
};