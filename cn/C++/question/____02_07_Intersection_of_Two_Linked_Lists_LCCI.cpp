// @algorithm @lc id=100167 lang=cpp
// @title intersection-of-two-linked-lists-lcci

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
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        ListNode *p = headA, *q = headB;
        ListNode *s = headA, *t = headB;
        int l1 = 0, l2 = 0;
        while (p)
        {
            p = p->next;
            l1++;
        }
        while (q)
        {
            q = q->next;
            l2++;
        }
        if (l1 > l2)
        {
            int k = l1 - l2;
            while (k--)
            {
                s = s->next;
            }
        }
        else
        {
            int k = l2 - l1;
            while (k--)
            {
                t = t->next;
            }
        }
        while (s != t)
        {
            s = s->next;
            t = t->next;
        }
        return s;
    }
};