// @algorithm @lc id=206 lang=cpp 
// @title reverse-linked-list

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test([1,2,3,4,5])=[5,4,3,2,1]
// @test([1,2])=[2,1]
// @test([])=[]
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
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==nullptr)
            return nullptr;
        ListNode *dummy = new ListNode(0);
        while (head)
        {
            ListNode *p = head->next;
            head->next = dummy->next;
            dummy->next = head;
            head = p;
        }
        return dummy->next;
    }
};
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         if(head==nullptr||head->next==nullptr)
//             return head;
//         ListNode *node = reverseList(head->next);
//         head->next->next = head;
//         head->next = nullptr;
//         return node;
//     }
// };
//迭代
// class Solution
// {
// public:
//     ListNode *reverseList(ListNode *head)
//     {
//         ListNode *dummy = new ListNode(0);
//         dummy->next = nullptr;
//         while (head)
//         {
//             ListNode *t = head->next;
//             head->next = dummy->next;
//             dummy->next = head;
//             head = t;
//         }
//         return dummy->next;
//     }
// };