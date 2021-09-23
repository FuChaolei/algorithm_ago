// @algorithm @lc id=20 lang=cpp
// @title valid-parentheses

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test("()")=true
// @test("()[]{}")=true
// @test("(]")=false
// @test("([)]")=false
// @test("{[]}")=true
class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;
        for (auto it : s)
        {
            if (it == '(' || it == '{' || it == '[')
                st.push(it);
            else
            {
                if (st.empty() && (it == ']' || it == ')' || it == '}'))
                    return false;
                else if (it == ']' && st.top() == '[')
                {
                    st.pop();
                }
                else if (it == ')' && st.top() == '(')
                {
                    st.pop();
                }
                else if (it == '}' && st.top() == '{')
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
        }
        return st.empty();
    }
};
// class Solution
// {
// public:
//     bool isValid(string s)
//     {
//         stack<char> st;
//         for (int i = 0; i < s.size(); i++)
//         {
//             if (s[i] == '(' || s[i] == '[' || s[i] == '{')
//             {
//                 st.push(s[i]);
//             }
//             else
//             {
//                 if (st.empty())
//                     return false;
//                 char t = st.top();
//                 st.pop();
//                 if (s[i] == ')')
//                 {
//                     if (t != '(')
//                         return false;
//                 }
//                 if (s[i] == ']')
//                 {
//                     if (t != '[')
//                         return false;
//                 }
//                 if (s[i] == '}')
//                 {
//                     if (t != '{')
//                         return false;
//                 }
//             }
//         }
//         if (!st.empty())
//             return false;
//         return true;
//     }
// };
