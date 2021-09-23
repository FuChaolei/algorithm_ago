// @algorithm @lc id=2084 lang=cpp weekname=weekly-contest-252
// @title maximum-number-of-weeks-for-which-you-can-work

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test([1,2,3])=6
// @test([5,2,1])=7
class Solution
{
public:
    long long numberOfWeeks(vector<int> &m)
    {
        long long res = accumulate(m.begin(), m.end(), (long long)0);
        long long ma = *max_element(m.begin(), m.end());
        if (res >= ma * 2)
            return res;
        return (res - ma) * 2 + 1;
    }
};