// @algorithm @lc id=100299 lang=cpp
// @title shan-chu-lian-biao-de-jie-dian-lcof

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test([4,5,1,9], 5)=[4,1,9]
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
    ListNode *deleteNode(ListNode *head, int val)
    {
        if (head == nullptr)
            return head;
        ListNode *cur = head;
        if (head->val == val)
            return head->next;
        while (cur->next->val != val)
        {
            cur = cur->next;
        }
        cur->next = cur->next->next;
        return head;
    }
};