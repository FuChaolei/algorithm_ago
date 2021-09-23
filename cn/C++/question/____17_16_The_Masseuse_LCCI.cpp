// @algorithm @lc id=1000023 lang=cpp
// @title the-masseuse-lcci

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test("")=""
// @test([1,2,3,1])=4
// @test([2,7,9,3,1])=12
// @test([2,1,4,5,3,1,1,3])=12
class Solution
{
public:
    int massage(vector<int> &nums)
    {
        int res = 0;
        if (nums.size() == 0)
            return 0;
        if (nums.size() == 1)
            return nums[0];
        if (nums.size() == 2)
            return max(nums[0], nums[1]);
        int f = nums[0], s = nums[1];
        for (int i = 2; i < nums.size(); i++)
        {
            int t = s;
            s = max(s, f + nums[i]);
            f = max(t, f);
        }
        return s;
    }
};