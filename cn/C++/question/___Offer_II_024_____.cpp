// @algorithm @lc id=1000260 lang=cpp
// @title UHnkqh

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test("")=""
// @test([1,2,3,4,5])=[5,4,3,2,1]
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
//递归
class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        if (!head || !head->next)
            return head;
        ListNode *nhead = reverseList(head->next);
        head->next->next = head;
        head->next = nullptr;
        return nhead;
    }
};
//迭代
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         if(head==nullptr)
//             return nullptr;
//         ListNode dummy(0);
//         dummy.next = nullptr;
//         while (head)
//         {
//             ListNode *s = head->next;
//             head->next = dummy.next;
//             dummy.next = head;
//             head = s;
//         }
//         return dummy.next;
//     }
// };
