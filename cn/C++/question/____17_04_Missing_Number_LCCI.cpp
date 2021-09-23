// @algorithm @lc id=1000032 lang=cpp
// @title missing-number-lcci

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test([3,0,1])=2
// @test([9,6,4,2,3,5,7,0,1])=8
class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        vector<int> t(nums.size() + 1);
        for (int i = 0; i < nums.size(); i++)
            t[nums[i]]++;
        for (int i = 0; i < t.size(); i++)
        {
            if (t[i] == 0)
                return i;
        }
        return -1;
    }
};