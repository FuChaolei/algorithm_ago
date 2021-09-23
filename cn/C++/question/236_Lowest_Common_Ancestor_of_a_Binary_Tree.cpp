// @algorithm @lc id=236 lang=cpp
// @title lowest-common-ancestor-of-a-binary-tree

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test([3,5,1,6,2,0,8,null,null,7,4],5,1)=3
// @test([3,5,1,6,2,0,8,null,null,7,4],5,4)=5
// @test([1,2],1,2)=1
// @test([3,5,1,6,2,0,8,null,null,7,4], 5, 4)=5
// @test([3,5,1,6,2,0,8,null,null,7,4], 5, 4)=5
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
    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
    {
        dfs(root, p, q);
        return res;
    }
private:
    TreeNode *res = nullptr;
    bool dfs(TreeNode *root, TreeNode *p, TreeNode *q)
    {
        if (root == nullptr)
            return false;
        bool l = dfs(root->left, p, q);
        bool r = dfs(root->right, p, q);
        if ((l && r) || ((l || r )&& (root->val == p->val || root->val == q->val)))
            res = root;
        return (p->val == root->val) || (q->val == root->val) || l || r;
    }
};
// class Solution
// {
// public:
//     TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
//     {
//         dfs(root, p, q);
//         return res;
//     }
// private:
//     TreeNode *res;
//     bool dfs(TreeNode *root, TreeNode *p, TreeNode *q)
//     {
//         if (root == nullptr)
//             return false;
//         bool l = dfs(root->left, p, q);
//         bool r = dfs(root->right, p, q);
//         if ((l && r) || ((root->val == p->val || root->val == q->val) && (l || r)))
//             res = root;
//         return l || r || (root->val == p->val || root->val == q->val);
//     }
// };
