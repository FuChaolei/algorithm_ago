// @algorithm @lc id=100282 lang=cpp
// @title cong-wei-dao-tou-da-yin-lian-biao-lcof

#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    vector<int> reversePrint(ListNode *head)
    {
        vector<int> res;
        while (head)
        {
            res.emplace_back(head->val);
            head = head->next;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};