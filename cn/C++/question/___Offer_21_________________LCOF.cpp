// @algorithm @lc id=100291 lang=cpp
// @title diao-zheng-shu-zu-shun-xu-shi-qi-shu-wei-yu-ou-shu-qian-mian-lcof

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test([1,2,3,4])=[1,3,2,4]
class Solution
{
public:
    vector<int> exchange(vector<int> &nums)
    {
        int i = 0, j = nums.size() - 1;
        while (i < j)
        {
            if (nums[i] % 2 == 1)
            {
                i++;
                continue;
            }
            if (nums[j] % 2 == 0)
            {
                j--;
                continue;
            }
            swap(nums[i], nums[j]);
        }
        return nums;
    }
};