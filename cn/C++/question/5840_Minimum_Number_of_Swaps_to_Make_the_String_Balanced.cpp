// @algorithm @lc id=2095 lang=cpp weekname=weekly-contest-253
// @title minimum-number-of-swaps-to-make-the-string-balanced

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test("][][")=1
// @test("]]][[[")=2
// @test("[]")=0
class Solution
{
public:
    int minSwaps(string s)
    {
        stack<int> st;
        for (int i = 0; i < s.size(); i++)
        {
            if (st.empty())
            {
                st.push(s[i]);
            }
            else
            {
                if (s[i] == ']' && st.top() == '[')
                    st.pop();
                else
                {
                    st.push(s[i]);
                }
            }
        }
        return (st.size() / 2 + 1) / 2;
    }
};
//超时
// class Solution
// {
// public:
//     int minSwaps(string s)
//     {
//         if (check(s))
//             return 0;
//         k = s.size() / 2;
//         while (!check(s) && k)
//         {
//             k--;
//             s[t] = '[';
//             t = -1;
//         }
//         //res=check
//         return res / 2;
//     }
// private:
//     int t = -1;
//     int res = 0;
//     int k;
//     bool check(string s)
//     {
//         stack<char> st;
//         for (int i = 0; i < s.size(); i++)
//         {
//             if (st.empty())
//             {
//                 if (s[i] == ']')
//                 {
//                     t = i;
//                     return false;
//                 }
//                 st.push(s[i]);
//             }
//             else
//             {
//                 if (s[i] == '[')
//                     st.push(s[i]);
//                 else
//                 {
//                     k--;
//                     st.pop();
//                 }
//             }
//         }
//         if (!st.empty())
//         {
//             res = st.size();
//             k = 0;
//         }
//         return true;
//     }
// };
