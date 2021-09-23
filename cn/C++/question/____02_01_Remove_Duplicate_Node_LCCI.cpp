// @algorithm @lc id=100163 lang=cpp
// @title remove-duplicate-node-lcci

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test([1,2,3,3,2,1])=[1,2,3]
// @test([1,1,1,1,2])=[1,2]
// @test([1, 2, 3, 3, 2, 1])=[1,2,3]
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
    ListNode *removeDuplicateNodes(ListNode *head)
    {
        if (head == nullptr)
            return nullptr;
        unordered_map<int, int> mp;
        ListNode *p = head;
        ListNode *q = head;
        while (head)
        {
            if (mp[head->val] == 0)
            {
                mp[head->val]++;
            }
            head = head->next;
        }
        mp[p->val]--;
        while (p->next)
        {
            if (mp[p->next->val] == 0)
            {
                p->next = p->next->next;
                continue;
            }
            mp[p->next->val]--;
            p = p->next;
        }
        return q;
    }
};