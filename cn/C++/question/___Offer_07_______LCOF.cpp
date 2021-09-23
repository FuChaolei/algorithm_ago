// @algorithm @lc id=100283 lang=cpp
// @title zhong-jian-er-cha-shu-lcof

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test([3,9,20,15,7], [9,3,15,20,7])=[3,9,20,null,null,15,7]
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
    unordered_map<int, int> mp;
    TreeNode *buildTree(vector<int> &p, vector<int> &in)
    {
        int n = p.size();
        for (size_t i = 0; i < n; i++)
            mp[in[i]] = i;
        return dfs(p, in, 0, n - 1, 0, n - 1);
    }

private:
    TreeNode *dfs(vector<int> p, vector<int> in, int pl, int pr, int inl, int inr)
    {
        if (pl > pr)
            return nullptr;
        TreeNode *root = new TreeNode(p[pl]);
        int k = mp[p[pl]] - inl;
        root->left = dfs(p, in, pl + 1, pl + k, inl, inl + k - 1);
        root->right = dfs(p, in, pl + k + 1, pr, inl + k + 1, inr);
        return root;
    }
};