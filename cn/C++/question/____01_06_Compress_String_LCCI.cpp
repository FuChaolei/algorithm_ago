// @algorithm @lc id=100161 lang=cpp
// @title compress-string-lcci

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test("")=""
// @test("aabcccccaaa")="a2b1c5a3"
// @test("abbccd")="abbccd"
class Solution
{
public:
    string compressString(string s)
    {
        string res;
        if (s == "")
            return "";
        char c = s[0];
        int t = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (c == s[i])
            {
                t++;
            }
            else
            {
                res += c;
                res += to_string(t);
                t = 1;
                c = s[i];
            }
        }
        res += c;
        res += to_string(t);
        return s.size() > res.size() ? res : s;
    }
};