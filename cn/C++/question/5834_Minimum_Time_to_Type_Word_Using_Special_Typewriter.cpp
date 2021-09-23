// @algorithm @lc id=2088 lang=cpp weekname=biweekly-contest-59
// @title minimum-time-to-type-word-using-special-typewriter

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test("abc")=5
// @test("bza")=7
// @test("zjpc")=34
// @test("pdy")=31
class Solution
{
public:
    int minTimeToType(string word)
    {
        int res = 0;
        char p = 'a';
        for (auto c : word)
        {
            int a = (c - p) > 0 ? (c - p) : (p - c);
            int b = (p - c) > 0 ? ('z' - p + 1 + c - 'a') : ('z' - c + 1 + p - 'a');
            res += min(a, b);
            p = c;
        }
        res += word.size();
        return res;
    }
};