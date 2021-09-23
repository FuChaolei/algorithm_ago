// @algorithm @lc id=94 lang=cpp
// @title binary-tree-inorder-traversal

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test([1,null,2,3])=[1,3,2]
// @test([])=[]
// @test([1])=[1]
// @test([1,2])=[2,1]
// @test([1,null,2])=[1,2]
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
    vector<int> inorderTraversal(TreeNode *root)
    {
        vector<int> res;
        stack<TreeNode *> st;
        TreeNode *cur = root;
        while (cur || !st.empty())
        {
            if (cur)
            {
                st.push(cur);
                cur = cur->left;
            }
            else
            {
                cur = st.top();
                st.pop();
                res.emplace_back(cur->val);
                cur = cur->right;
            }
        }
        return res;
    }
};
// class Solution
// {
// public:
//     vector<int> inorderTraversal(TreeNode *root)
//     {
//         stack<TreeNode *> st;
//         vector<int> res;
//         TreeNode *cur = root;
//         while (cur != nullptr || !st.empty())
//         {
//             if (cur != nullptr)
//             {
//                 st.push(cur);
//                 cur = cur->left;
//             }
//             else
//             {
//                 cur = st.top();
//                 st.pop();
//                 res.emplace_back(cur->val);
//                 cur = cur->right;
//             }
//         }
//         return res;
//     }
// };
// class Solution {
// public:
//     vector<int> inorderTraversal(TreeNode* root) {
//         inOrder(root);
//         return path;
//     }
//     private:
//         vector<int> path;
//         void inOrder(TreeNode *root)
//         {
//             if (root)
//             {
//                 inOrder(root->left);
//                 path.emplace_back(root->val);
//                 inOrder(root->right);
//             }
//         }
// };
