// @algorithm @lc id=19 lang=cpp
// @title remove-nth-node-from-end-of-list

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test([1,2,3,4,5],2)=[1,2,3,5]
// @test([1],1)=[]
// @test([1,2],1)=[1]
// @test([1,2,3,4,5], 2)=[1,2,3,5]
// @test([1], 1)=[]
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
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *dummy = new ListNode(0);
        dummy->next = head;
        ListNode *s = dummy;
        ListNode *f = dummy;
        int t = n;
        while (t && f)
        {
            t--;
            f = f->next;
        }
        f = f->next;
        while (f)
        {
            f = f->next;
            s = s->next;
        }
        s->next = s->next->next;
        return dummy->next;
    }
};
// class Solution {
// public:
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         ListNode* dummyHead = new ListNode(0);
//         dummyHead->next = head;
//         ListNode* slow = dummyHead;
//         ListNode* fast = dummyHead;
//         while(n-- && fast != NULL) {
//             fast = fast->next;
//         }
//         fast = fast->next; // fast再提前走一步，因为需要让slow指向删除节点的上一个节点
//         while (fast != NULL) {
//             fast = fast->next;
//             slow = slow->next;
//         }
//         slow->next = slow->next->next;
//         return dummyHead->next;
//     }
// };
