// @algorithm @lc id=100322 lang=cpp
// @title he-wei-sde-liang-ge-shu-zi-lcof

#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        //vector<int> res(2);
        sort(nums.begin(), nums.end());
        int i = 0;
        int j = nums.size() - 1;
        while (nums[i] + nums[j] != target)
        {
            if (nums[i] + nums[j] < target)
                i++;
            else
            {
                j--;
            }
        }
        return {nums[i], nums[j]};
    }
};