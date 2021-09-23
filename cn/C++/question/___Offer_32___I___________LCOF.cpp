// @algorithm @lc id=100311 lang=cpp
// @title cong-shang-dao-xia-da-yin-er-cha-shu-lcof

#include <bits/stdc++.h>
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
    // @test([3,9,20,null,null,15,7])=[3,9,20,15,7]
public:
    vector<int> levelOrder(TreeNode *root)
    {
        queue<TreeNode *> q;
        if (root == nullptr)
            return {};
        q.push(root);
        vector<int> res;
        while (!q.empty())
        {
            res.emplace_back(q.front()->val);
            if (q.front()->left)
                q.push(q.front()->left);
            if (q.front()->right)
                q.push(q.front()->right);
            q.pop();
        }
        return res;
    }
};