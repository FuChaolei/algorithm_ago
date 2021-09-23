// @algorithm @lc id=100341 lang=cpp
// @title bu-ke-pai-zhong-de-shun-zi-lcof

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
    bool isStraight(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        for (int i = 0; i < 5; i++)
        {
            if (i < 4 && nums[i] == nums[i + 1] && nums[i] != 0)
                return false;
        }
        int t;
        for (int i = 0; i < nums.size(); i++)
            if (nums[i] != 0)
            {
                t = nums[i];
                break;
            }
        return nums[4] - t < 5;
    }
};