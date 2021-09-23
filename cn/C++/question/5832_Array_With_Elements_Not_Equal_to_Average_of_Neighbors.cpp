// @algorithm @lc id=2085 lang=cpp weekname=weekly-contest-254
// @title array-with-elements-not-equal-to-average-of-neighbors

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test("")=""
// @test([1,2,3,4,5])=[1,2,4,5,3]
// @test([6,2,0,9,7])=[9,7,6,2,0]
// @test([15,7,13,6,3,11,14,1,20])=[11,1,13,3,14,6,15,7,20]
class Solution
{
public:
    vector<int> rearrangeArray(vector<int> &nums)
    {
        //vector<int> t(nums.begin(), nums.end());
        sort(nums.begin(), nums.end());
        //sort(t.begin(), t.end(), greater<>());
        int n = 3;
        while (n--)
            for (int i = 1; i < nums.size() - 1; i++)
            {
                if (nums[i] * 1.0 == (nums[i - 1] + nums[i + 1]) * 1.0 / 2)
                    swap(nums[i], nums[i + 1]);
            }
        return nums;
    }
};