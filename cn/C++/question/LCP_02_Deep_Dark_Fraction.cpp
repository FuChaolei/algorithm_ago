// @algorithm @lc id=100092 lang=cpp
// @title deep-dark-fraction

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
    vector<int> fraction(vector<int> &c)
    {
        if (c.size() == 1)
            return {c[0], 1};
        int a = c[c.size() - 1], b = c[c.size() - 2], d = 1;
        for (int i = c.size() - 3; i >= 0; i--)
        {
            int t = a;
            a = (a * b) + d;
            d = t;
            b = c[i];
        }
        int k = __gcd(a * b + d, a);
        return {(a * b + d) / k, a / k};
    }
};