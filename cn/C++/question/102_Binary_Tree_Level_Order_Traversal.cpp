// @algorithm @lc id=102 lang=cpp
// @title binary-tree-level-order-traversal

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test([3,9,20,null,null,15,7])=[[3],[9,20],[15,7]]
// @test([1])=[[1]]
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
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        queue<TreeNode *> q;
        vector<int> res;
        vector<vector<int>> ans;
        //vector<int> path;
        if (root)
            q.push(root);
        while (!q.empty())
        {
            // int n = q.size();
            // for (int i = 0; i < n; i++)
            // {
                TreeNode *cur = q.front();
                res.emplace_back(cur->val);
                if (cur->left)
                    q.push(cur->left);
                if (cur->right)
                    q.push(cur->right);
                q.pop();
            //}
        }
        ans.emplace_back(res);
        return ans;
    }
};

// class Solution
// {
// public:
//     vector<vector<int>> levelOrder(TreeNode *root)
//     {
//         vector<vector<int>> res;
//         queue<TreeNode *> q;
//         if (root)
//             q.push(root);
//         while (!q.empty())
//         {
//             vector<int> path;
//             int n = q.size();
//             for (int i = 0; i < n; i++)
//             {
//                 TreeNode *cur = q.front();
//                 path.emplace_back(cur->val);
//                 if (cur->left)
//                     q.push(cur->left);
//                 if (cur->right)
//                     q.push(cur->right);
//                 q.pop();
//             }
//             res.emplace_back(path);
//         }
//         return res;
//     }
// };
// class Solution
// {
// public:
//     vector<vector<int>> levelOrder(TreeNode *root)
//     {
//         if (root == nullptr)
//             return {};
//         vector<vector<int>> res;
//         queue<TreeNode *> q;
//         q.push(root);
//         while (!q.empty())
//         {
//             int s = q.size();
//             vector<int> temp;
//             while (s)
//             {
//                 s--;
//                 TreeNode *cur = q.front();
//                 q.pop();
//                 if (cur->left)
//                     q.push(cur->left);
//                 if (cur->right)
//                     q.push(cur->right);
//                 temp.emplace_back(cur->val);
//             }
//             res.emplace_back(temp);
//         }
//         return res;
//     }
// };
