// @algorithm @lc id=1000237 lang=cpp
// @title kLl5u1

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
    vector<int> twoSum(vector<int> &n, int t)
    {
        int l = 0, r = n.size() - 1;
        while (l < r)
        {
            if (n[l] + n[r] > t)
                r--;
            else if (n[l] + n[r] < t)
                l++;
            else
            {
                return {l, r};
            }
        }
        return {};
    }
};