// @algorithm @lc id=283 lang=cpp
// @title move-zeroes

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test([0,1,0,3,12])=[1,3,12,0,0]
// @test([0])=[0]
class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int k = 0;
        for (auto it : nums)
        {
            if (it != 0)
            {
                nums[k++] = it;
            }
        }
        while (k < nums.size())
        {
            nums[k++] = 0;
        }
    }
};