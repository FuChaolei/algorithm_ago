// @algorithm @lc id=100352 lang=cpp
// @title diving-board-lcci

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
    vector<int> divingBoard(int s, int l, int k)
    {
        if (k == 0)
            return {};
        int d = l - s;
        vector<int> res;
        int t = s * k;
        res.emplace_back(t);
        if (d != 0)
            for (int i = 1; i <= k; i++)
            {
                res.emplace_back(i * d + t);
            }
        return res;
    }
};