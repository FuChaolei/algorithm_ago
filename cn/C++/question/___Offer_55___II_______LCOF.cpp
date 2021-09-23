// @algorithm @lc id=100342 lang=cpp
// @title ping-heng-er-cha-shu-lcof

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test("")=""
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
    bool isBalanced(TreeNode *root)
    {
        if (root == nullptr)
            return true;
        return dep(root) != -1;
    }

private:
    int dep(TreeNode *root)
    {
        if (root == nullptr)
            return 0;
        int l = dep(root->left);
        if (l == -1)
            return -1;
        int r = dep(root->right);
        if (r == -1)
            return -1;
        if (abs(l - r) > 1)
            return -1;
        return max(l, r) + 1;
    }
};