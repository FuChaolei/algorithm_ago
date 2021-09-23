// @algorithm @lc id=100286 lang=cpp
// @title he-bing-liang-ge-pai-xu-de-lian-biao-lcof

#include <iostream>
#include <vector>
#include <string>
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
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        ListNode *dummy = new ListNode(0);
        ListNode *head = dummy;
        while (l1 && l2)
        {
            if (l1->val <= l2->val)
            {
                dummy->next = l1;
                dummy = dummy->next;
                l1 = l1->next;
            }
            else
            {
                dummy->next = l2;
                dummy = dummy->next;
                l2 = l2->next;
            }
        }
        while (l1)
        {
            dummy->next = l1;
            dummy = dummy->next;
            l1 = l1->next;
        }
        while ((l2))
        {
            dummy->next = l2;
            dummy = dummy->next;
            cout << l2->val << endl;
            l2 = l2->next;
        }
        return head->next;
    }
};