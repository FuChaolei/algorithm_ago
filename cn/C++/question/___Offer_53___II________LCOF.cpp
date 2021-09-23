// @algorithm @lc id=100331 lang=cpp
// @title que-shi-de-shu-zi-lcof

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
    int missingNumber(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != i)
                return i;
        }
        return nums.size();
    }
};