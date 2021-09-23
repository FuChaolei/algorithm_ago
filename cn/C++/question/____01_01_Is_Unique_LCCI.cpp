// @algorithm @lc id=100158 lang=cpp
// @title is-unique-lcci

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test("")=""
// @test("leetcode")=false
// @test("abc")=true
// @test("")=true
class Solution
{
public:
    bool isUnique(string astr)
    {
        if (astr.size() == 0)
            return 1;
        sort(astr.begin(), astr.end());
        for (int i = 0; i < astr.size() - 1; i++)
        {
            if (astr[i] == astr[i + 1])
                return false;
        }
        return true;
    }
};