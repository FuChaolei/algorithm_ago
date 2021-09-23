// @algorithm @lc id=100197 lang=cpp
// @title three-steps-problem-lcci

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test("")=""
// @test(3)=4
// @test(5)=13
class Solution
{
public:
    int waysToStep(int n)
    {
        if (n == 1)
            return 1;
        if (n == 2)
            return 2;
        if (n == 3)
            return 4;
        long long a = 1, b = 2, c = 4, d;
        for (int i = 4; i <= n; i++)
        {
            d = (a + b + c) % 1000000007;
            a = b;
            b = c;
            c = d;
        }
        return d;
    }
};