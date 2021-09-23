// @algorithm @lc id=100289 lang=cpp
// @title dui-cheng-de-er-cha-shu-lcof

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
    bool isSymmetric(TreeNode *root)
    {
        if (root == NULL)
            return true;
        return check(root->left, root->right);
    }

private:
    bool check(TreeNode *lleft, TreeNode *rright)
    {
        if (lleft == nullptr && rright == nullptr)
        {
            return true;
        }
        if (lleft == nullptr || rright == nullptr)
        {
            return false;
        }
        if (lleft->val == rright->val)
        {
            return check(lleft->left, rright->right) && check(lleft->right, rright->left);
        }
        return false;
    }
};