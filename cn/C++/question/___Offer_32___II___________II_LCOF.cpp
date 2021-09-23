// @algorithm @lc id=100312 lang=cpp
// @title cong-shang-dao-xia-da-yin-er-cha-shu-ii-lcof

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
// @test([3,9,20,null,null,15,7])=[[3],[9,20],[15,7]]
{
public:
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        vector<vector<int>> res;
        queue<TreeNode *> q;
        if (root)
            q.push(root);
        while (!q.empty())
        {
            int count = q.size();
            vector<int> t;
            for (int i = 0; i < count; i++)
            {
                t.emplace_back(q.front()->val);
                if (q.front()->left)
                    q.push(q.front()->left);
                if (q.front()->right)
                    q.push(q.front()->right);
                q.pop();
            }
            res.emplace_back(t);
        }
        return res;
    }
};