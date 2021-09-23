// @algorithm @lc id=1000007 lang=cpp
// @title kth-node-from-end-of-list-lcci

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
    int kthToLast(ListNode *head, int k)
    {
        ListNode *p = head;
        while (k--)
            p = p->next;
        while (p)
        {
            head = head->next;
            p = p->next;
        }
        return head->val;
    }
};