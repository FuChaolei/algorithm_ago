// @algorithm @lc id=100176 lang=cpp
// @title check-balance-lcci

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
        return jud(root) != -1;
    }

private:
    int jud(TreeNode *root)
    {
        if (root == nullptr)
            return 0;
        int l = jud(root->left);
        if (l == -1)
            return -1;
        int r = jud(root->right);
        if (r == -1)
            return -1;
        if (abs(l - r) > 1)
            return -1;
        return max(l, r) + 1;
    }
};