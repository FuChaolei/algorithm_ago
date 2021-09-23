// @algorithm @lc id=100316 lang=cpp
// @title di-yi-ge-zhi-chu-xian-yi-ci-de-zi-fu-lcof

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test("leetcode")="l"
// @test("leetcode")="l"
class Solution
{
public:
    char firstUniqChar(string s)
    {
        unordered_map<char, int> mp;
        for (int i = 0; i < s.size(); i++)
            mp[s[i]]++;
        for (auto it : s)
            if (mp[it] == 1)
                return it;
        return ' ';
    }
};