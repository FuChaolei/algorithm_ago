// @algorithm @lc id=1000254 lang=cpp
// @title XltzEq

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test("")=""
// @test("0P")=false
class Solution
{
public:
    bool isPalindrome(string s)
    {
        string res;
        for (int i = 0; i < s.size(); i++)
            if (!isalpha(s[i]) && !isdigit(s[i]))
                continue;
            else
            {
                res += tolower(s[i]);
            }
        string t = res;
        reverse(t.begin(), t.end());
        return t == res;
    }
};