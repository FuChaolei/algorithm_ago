// @algorithm @lc id=1000003 lang=cpp
// @title contiguous-sequence-lcci

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test([-2,1,-3,4,-1,2,1,-5,4])=6
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int max = INT_MIN;
        int s = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            s += nums[i];
            if (s > max)
                max = s;
            if (s < 0)
                s = 0;
        }
        return max;
    }
};