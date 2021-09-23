// @algorithm @lc id=1000263 lang=cpp
// @title aMhZSa

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test("")=""
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    bool isPalindrome(ListNode *head)
    {
        ListNode *dummy = new ListNode(0);
        ListNode *res = head, *p = head, *q = head;
        while (q && q->next)
        {
            q = q->next;
            p = p->next;
            q = q->next;
        }
        while (p)
        {
            ListNode *t = p->next;
            p->next = dummy->next;
            dummy->next = p;
            p = t;
        }
        ListNode *cur = dummy->next;
        while (cur && res->val == cur->val)
        {
            res = res->next;
            cur = cur->next;
        }
        if (!cur)
            return true;
        return false;
    }
};