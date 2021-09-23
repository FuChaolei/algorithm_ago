// @algorithm @lc id=100298 lang=cpp
// @title fan-zhuan-lian-biao-lcof

#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
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
    // @test([1,2,3,4,5])=[5,4,3,2,1]
public:
    ListNode *reverseList(ListNode *head)
    {
        if (head == nullptr)
            return head;
        ListNode *p = head;
        ListNode *s = nullptr;
        ListNode *q = head->next;
        ListNode dummy(0);
        dummy.next = head;
        head->next = nullptr;
        while (q)
        {
            s = q->next;
            q->next = head;
            dummy.next = q;
            head = q;
            q = s;
        }
        return dummy.next;
    }
};