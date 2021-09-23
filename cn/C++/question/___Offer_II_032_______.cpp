// @algorithm @lc id=1000273 lang=cpp
// @title dKk3P7

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test("")=""
class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s == t)
            return false;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
};