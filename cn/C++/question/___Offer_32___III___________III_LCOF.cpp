// @algorithm @lc id=100314 lang=cpp
// @title cong-shang-dao-xia-da-yin-er-cha-shu-iii-lcof

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
    // @test([3,9,20,null,null,15,7])=[[3],[20,9],[15,7]]
    // @test([3,9,20,null,null,15,7])=[[3],[20,9],[15,7]]
public:
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        vector<vector<int>> res;
        queue<TreeNode *> q;
        if (root)
            q.push(root);
        int f = 0;
        while (!q.empty())
        {
            f++;
            vector<int> t;
            int count = q.size();
            for (int i = 0; i < count; i++)
            {
                t.emplace_back(q.front()->val);
                if (q.front()->left)
                {
                    q.push(q.front()->left);
                }
                if (q.front()->right)
                {
                    q.push(q.front()->right);
                }
                q.pop();
            }
            if (f % 2 == 0)
            {
                reverse(t.begin(), t.end());
            }
            res.emplace_back(t);
        }
        return res;
    }
};