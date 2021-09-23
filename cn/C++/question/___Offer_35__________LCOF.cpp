// @algorithm @lc id=100300 lang=cpp
// @title fu-za-lian-biao-de-fu-zhi-lcof

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test("")=""
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/
class Solution
{
public:
    Node *copyRandomList(Node *head)
    {
        if (head == nullptr)
            return head;
        Node *p = new Node(head->val);
        unordered_map<Node *, Node *> mp{{head, p}};
        Node *cur = head;
        Node *q = head;
        while (cur->next)
        {
            p->next= new Node(cur->next->val);
            p = p->next;
            cur = cur->next;
            mp[cur] = p;
        }
        while (q)
        {
            mp[q]->random = mp[q->random];
            q = q->next;
        }
        return mp[head];
    }
};