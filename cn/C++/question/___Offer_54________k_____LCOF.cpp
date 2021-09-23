// @algorithm @lc id=100333 lang=cpp
// @title er-cha-sou-suo-shu-de-di-kda-jie-dian-lcof

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
    int kthLargest(TreeNode *root, int k)
    {
        inOrder(root, k);
        return res;
    }

private:
    int n = 0;
    int res;
    void inOrder(TreeNode *root, int &k)
    {
        if (root)
        {
            inOrder(root->right, k);
            n++;
            if (n == k)
            {
                res = root->val;
                return;
            }
            inOrder(root->left, k);
        }
    }
};