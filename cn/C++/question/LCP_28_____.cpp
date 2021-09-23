// @algorithm @lc id=1000215 lang=cpp
// @title 4xy4Wx

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test([2,5,3,5],6)=1
class Solution
{
public:
    int purchasePlans(vector<int> &nums, int target)
    {
        sort(nums.begin(), nums.end());
        int res = 0;
        int j = nums.size() - 1;
        int i = 0;
        while (i < j && nums[i] < target && i < nums.size())
        {
            while (j > i && nums[j] + nums[i] > target)
                j--;
            res += j - i;
            res %= 1000000007;
            i++;
        }
        return res;
    }
};