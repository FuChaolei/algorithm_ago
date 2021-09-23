// @algorithm @lc id=21 lang=cpp
// @title merge-two-sorted-lists

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test([1,2,4],[1,3,4])=[1,1,2,3,4,4]
// @test([],[])=[]
// @test([],[0])=[0]
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
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        if (l1 == nullptr)
            return l2;
        if (l2 == nullptr)
            return l1;
        ListNode *dummy = new ListNode(0);
        ListNode *res = dummy;
        while (l1 && l2)
        {
            ListNode *p = l1->next;
            ListNode *q = l2->next;
            if (l1->val < l2->val)
            {
                l1->next = dummy->next;
                dummy->next = l1;
                dummy = l1;
                l1 = p;
            }
            else if (l1->val > l2->val)
            {
                l2->next = dummy->next;
                dummy->next = l2;
                dummy = l2;
                l2 = q;
            }
            else
            {
                l1->next = dummy->next;
                dummy->next = l1;
                dummy = l1;
                l1 = p;
                l2->next = dummy->next;
                dummy->next = l2;
                dummy = l2;
                l2 = q;
            }
        }
        if (l1)
        {
            dummy->next = l1;
        }
        if (l2)
        {
            dummy->next = l2;
        }
        return res->next;
    }
};