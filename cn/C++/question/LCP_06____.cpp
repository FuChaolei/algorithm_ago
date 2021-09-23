// @algorithm @lc id=1000056 lang=cpp
// @title na-ying-bi

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
    int minCount(vector<int> &c)
    {
        int res = 0;
        for (int i = 0; i < c.size(); i++)
        {
            res += c[i] % 2 + c[i] / 2;
        }
        return res;
    }
};