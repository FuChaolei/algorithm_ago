// @algorithm @lc id=100174 lang=cpp
// @title minimum-height-tree-lcci

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
    TreeNode *sortedArrayToBST(vector<int> &nums)
    {
        if (nums.size() == 0)
            return nullptr;
        return dfs(nums, 0, nums.size() - 1);
    }

private:
    TreeNode *dfs(vector<int> &nums, int l, int r)
    {
        if (l > r)
            return nullptr;
        int mid = l + (r - l) / 2;
        TreeNode *root = new TreeNode(nums[mid]);
        root->left = dfs(nums, l, mid - 1);
        root->right = dfs(nums, mid + 1, r);
        return root;
    }
};