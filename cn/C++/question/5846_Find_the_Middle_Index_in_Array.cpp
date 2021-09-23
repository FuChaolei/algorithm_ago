// @algorithm @lc id=2102 lang=cpp weekname=biweekly-contest-60
// @title find-the-middle-index-in-array

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test([2,3,-1,8,4])=3
// @test([1,-1,4])=2
// @test([2,5])=-1
// @test([1])=0
class Solution
{
public:
    int findMiddleIndex(vector<int> &nums)
    {
        if (nums.size() == 1)
            return 0;
        int t = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (t == accumulate(nums.begin() + i + 1, nums.end(), 0))
                return i;
            else
            {
                t = accumulate(nums.begin(), nums.begin() + i + 1, 0);
            }
        }
        return -1;
    }
};