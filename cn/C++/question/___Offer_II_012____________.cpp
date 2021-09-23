// @algorithm @lc id=1000248 lang=cpp
// @title tvdfij

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
    int pivotIndex(vector<int> &nums)
    {
        int s = accumulate(nums.begin(), nums.end(), 0);
        int t = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] + t * 2 == s)
                return i;
            t += nums[i];
        }
        return -1;
    }
};