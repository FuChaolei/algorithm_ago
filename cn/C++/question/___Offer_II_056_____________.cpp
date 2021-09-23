// @algorithm @lc id=1000319 lang=cpp
// @title opLdQZ

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
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    bool findTarget(TreeNode *root, int k)
    {
        if (root == nullptr)
            return false;
        inOrder(root);
        int l = 0, r = res.size() - 1;
        while (l < r)
        {
            int t = res[l] + res[r];
            if (t < k)
                l++;
            else if (t > k)
                r--;
            else
            {
                return true;
            }
        }
        return false;
    }

private:
    vector<int> res;
    void inOrder(TreeNode *root)
    {
        if (root)
        {
            inOrder(root->left);
            res.emplace_back(root->val);
            inOrder(root->right);
        }
    }
};