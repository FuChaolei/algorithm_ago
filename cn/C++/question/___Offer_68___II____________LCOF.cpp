// @algorithm @lc id=100347 lang=cpp
// @title er-cha-shu-de-zui-jin-gong-gong-zu-xian-lcof

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
// @test([3,5,1,6,2,0,8,null,null,7,4],5,1)=3
public:
    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
    {
        if (root == nullptr || root == p || root == q)
            return root;
        TreeNode *l = lowestCommonAncestor(root->left, p, q);
        TreeNode *r = lowestCommonAncestor(root->right, p, q);
        if (l != nullptr && r != nullptr)
            return root;
        else if (l != nullptr)
            return l;
        else
        {
            return r;
        }
    }
};