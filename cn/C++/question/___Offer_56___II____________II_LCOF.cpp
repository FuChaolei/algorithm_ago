// @algorithm @lc id=100321 lang=cpp
// @title shu-zu-zhong-shu-zi-chu-xian-de-ci-shu-ii-lcof

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
    int singleNumber(vector<int> &nums)
    {
        int n = nums.size();
        if (n == 1)
            return nums[0];
        sort(nums.begin(), nums.end());
        if (nums[0] != nums[1])
            return nums[0];
        if (nums[n - 1] != nums[n - 2])
            return nums[n - 1];
        for (int i = 3; i < n - 1;i++){
            if(nums[i]!=nums[i-1]&&nums[i]!=nums[i+1])
                return nums[i];
        }
        return -1;
    }
};