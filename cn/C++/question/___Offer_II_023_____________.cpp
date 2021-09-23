// @algorithm @lc id=1000259 lang=cpp
// @title 3u1WK4

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
    ListNode *getIntersectionNode(ListNode *A, ListNode *B)
    {
        ListNode *p = A, *q = B;
        int l1 = 0, l2 = 0;
        while (p)
        {
            l1++;
            p = p->next;
        }
        while (q)
        {
            l2++;
            q = q->next;
        }
        ListNode *t = nullptr, *tt = nullptr;
        if (l1 > l2)
        {
            t = A;
            tt = B;
        }
        else
        {
            t = B;
            tt = A;
        }
        int k = abs(l1 - l2);
        while (k--)
        {
            t = t->next;
        }
        while (tt != t)
        {
            t = t->next;
            tt = tt->next;
        }
        return t;
    }
};