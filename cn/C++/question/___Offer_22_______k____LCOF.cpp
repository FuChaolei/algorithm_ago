// @algorithm @lc id=100294 lang=cpp
// @title lian-biao-zhong-dao-shu-di-kge-jie-dian-lcof

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
    ListNode *getKthFromEnd(ListNode *head, int k)
    {
        ListNode *p = head;
        ListNode *q = head;
        for (int i = 0; i < k; i++)
        {
            q = q->next;
        }
        while (q)
        {
            q = q->next;
            p = p->next;
        }
        return p;
    }
};