// @algorithm @lc id=1302 lang=cpp weekname=biweekly-contest-58
// @title delete-characters-to-make-fancy-string

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test("leeetcode")="leetcode"
// @test("aaabaaaa")="aabaa"
// @test("aab")="aab"
class Solution
{
public:
    string makeFancyString(string s)
    {
        // if (s.size() <= 2)
        //     return s;
        // char a = s[0];
        // char b = s[1];
        // for (int i = 2; i < s.size(); i++)
        // {
        //     if (a == s[i] && b == s[i])
        //     {
        //         s.erase(i, 1);
        //         i--;
        //     }
        //     else{
        //         a = b;
        //         b = s[i];
        //     }
        // }
        // return s;
        string res;
        if (s.size() <= 2)
            return s;
        res += s[0];
        res += s[1];
        char a = s[0];
        char b = s[1];
        for (int i = 2; i < s.size(); i++)
        {
            if (a == s[i] && b == s[i])
            {
                continue;
            }
            else
            {
                a = b;
                b = s[i];
                res += s[i];
            }
        }
        return res;
    }
};