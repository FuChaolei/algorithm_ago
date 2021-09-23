// @algorithm @lc id=100159 lang=cpp
// @title check-permutation-lcci

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test("abc","bca")=true
// @test("abc","bad")=false
class Solution
{
public:
    bool CheckPermutation(string s1, string s2)
    {
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        return s1 == s2;
    }
};