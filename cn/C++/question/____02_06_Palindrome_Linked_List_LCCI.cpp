// @algorithm @lc id=100164 lang=cpp
// @title palindrome-linked-list-lcci

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test("")=""
// @test([1,2])=false
// @test([1,2,2,1])=true
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
    bool isPalindrome(ListNode *head)
    {
        if (head == nullptr)
            return 1;
        ListNode *p = head, *q = head, *s = head;
        while (q && q->next)
        {
            q = q->next;
            if (q->next == nullptr)
                break;
            p = p->next;
            q = q->next;
        }
        ListNode *t = p->next;
        p->next = nullptr;
        while (t)
        {
            ListNode *l = t->next;
            t->next = p->next;
            p->next = t;
            t = l;
        }
        while (p->next)
        {
            if (p->next->val == s->val)
            {
                p = p->next;
                s = s->next;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};