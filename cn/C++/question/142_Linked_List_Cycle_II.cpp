// @algorithm @lc id=142 lang=cpp
// @title linked-list-cycle-ii

#include <bits/stdc++.h>
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
public:
    ListNode *detectCycle(ListNode *head)
    {
        ListNode *s = head, *f = head;
        while (f && f->next)
        {
            s = s->next;
            f = f->next->next;
            if (s == f)
            {
                ListNode *p = head;
                ListNode *q = s;
                while (p != q)
                {
                    p = p->next;
                    q = q->next;
                }
                return p;
            }
        }
        return nullptr;
    }
};
// class Solution
// {
// public:
//     ListNode *detectCycle(ListNode *head)
//     {
//         ListNode *s = head, *f = head;
//         while (f && f->next)
//         {
//             s = s->next;
//             f = f->next->next;
//             if (s == f)
//             {
//                 f = head;
//                 while (f != s)
//                 {
//                     s = s->next;
//                     f = f->next;
//                 }
//                 return s;
//             }
//         }
//         return nullptr;
//     }
// };
