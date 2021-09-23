// @algorithm @lc id=100184 lang=cpp
// @title palindrome-permutation-lcci

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test("")=""
// @test("tactcoa")=true
// @test("AaBb//a")=false
class Solution
{
public:
    bool canPermutePalindrome(string s)
    {
        int f = 0;
        unordered_map<char, int> mp;
        for (int i = 0; i < s.size(); i++)
            mp[s[i]]++;
        for (auto [k, v] : mp)
        {
            if (f == 1 && v % 2 == 1)
                return false;
            else if (f == 0 && v % 2 == 1)
                f = 1;
        }
        return true;
    }
};