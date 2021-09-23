// @algorithm @lc id=1000221 lang=cpp
// @title o8SXZn

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
    int storeWater(vector<int> &bucket, vector<int> &vat)
    {
        int res = INT_MAX;
        int n = bucket.size();
        int t = *max_element(begin(vat), end(vat));
        if (t == 0)
            return 0;
        for (int i = 1; i <= t; i++)
        {
            int cur = i;
            for (int j = 0; j < n; j++)
            {
                int least = vat[j] / i + (vat[j] % i != 0);
                cur += max(least - bucket[j], 0);
            }
            res = min(res, cur);
        }
        return res;
    }
};