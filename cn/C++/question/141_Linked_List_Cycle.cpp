// @algorithm @lc id=141 lang=cpp
// @title linked-list-cycle

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test([3,2,0,-4],1)=true
// @test([1,2],0)=true
// @test([1],-1)=false
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
    bool hasCycle(ListNode *head)
    {
        ListNode *p = head, *q = head;
        while (q && q->next)
        {
            p = p->next;
            q = q->next;
            q = q->next;
            if (q == p)
                return true;
        }
        return false;
    }
};
// class Solution
// {
// public:
//     bool hasCycle(ListNode *head)
//     {
//         if (head == nullptr)
//             return false;
//         ListNode *p = head;
//         ListNode *q = head->next;
//         while (q && q->next && q != p)
//         {
//             p = p->next;
//             q = q->next;
//             q = q->next;
//         }
//         return q == p;
//     }
// };
