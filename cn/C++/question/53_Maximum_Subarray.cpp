// @algorithm @lc id=53 lang=cpp
// @title maximum-subarray

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test([-2,1,-3,4,-1,2,1,-5,4])=6
// @test([1])=1
// @test([5,4,-1,7,8])=23
// @test([-2,1,-3,4,-1,2,1,-5,4])=6
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int res = INT_MIN;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            res = max(res, sum);
            if (sum < 0)
                sum = 0;
        }
        return res;
    }
};