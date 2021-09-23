// @algorithm @lc id=1000332 lang=cpp
// @title N6YdxV

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test([1,3,5,6],0)=0
// class Solution
// {
// public:
//     int searchInsert(vector<int> &nums, int target)
//     {
//         return lower_bound(nums.begin(), nums.end(), target) - nums.begin();
//     }
// };
class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int l = 0, r = nums.size();
        while (l < r)
        {
            int mid = l + (r - l) / 2;
            if (nums[mid] >= target)
                r = mid;
            else
            {
                l = mid + 1;
            }
        }
        return l;
    }
};