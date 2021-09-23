// @algorithm @lc id=100346 lang=cpp
// @title er-cha-sou-suo-shu-de-zui-jin-gong-gong-zu-xian-lcof
// @test([6,2,8,0,4,7,9,null,null,3,5],2,4)=2
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
public:
    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
    {
        if (root == nullptr)
            return nullptr;
        if (root->val > p->val && root->val > q->val)
            return lowestCommonAncestor(root->left, p, q);
        if (root->val < p->val && root->val < q->val)
            return lowestCommonAncestor(root->right, p, q);
        return root;
    }
};