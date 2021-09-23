// @algorithm @lc id=199 lang=cpp
// @title binary-tree-right-side-view

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test([1,2,3,null,5,null,4])=[1,3,4]
// @test([1,null,3])=[1,3]
// @test([])=[]
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
    vector<int> rightSideView(TreeNode *root)
    {
        queue<TreeNode *> q;
        vector<int> res;
        if (root)
            q.push(root);
        while (!q.empty())
        {
            int n = q.size();
            for (int i = 0; i < n; i++)
            {
                TreeNode *cur = q.front();
                if (cur->left)
                    q.push(cur->left);
                if (cur->right)
                    q.push(cur->right);
                if (i == n - 1)
                    res.emplace_back(cur->val);
                q.pop();
            }
        }
        return res;
    }
};