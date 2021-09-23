// @algorithm @lc id=1 lang=cpp
// @title two-sum

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test([2,7,11,15],9)=[0,1]
// @test([3,2,4],6)=[1,2]
// @test([3,3],6)=[0,1]
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int count = nums.size();
        for (int i = 0; i < count; i++)
        {
            for (int j = i + 1; j < count; j++)
            {
                if (nums[i] + nums[j] == target)
                    return {i, j};
            }
        }
        return {};
    }
};
//class Solution
// {
// public:
//     vector<int> twoSum(vector<int> &nums, int target)
//     {
//         unordered_map<int, int> mp;
//         for (int i = 0; i < nums.size(); i++)
//         {
//             if (mp.count(target - nums[i]) != 0)
//                 return {i, mp[target - nums[i]]};
//             mp[nums[i]] = i;
//         }
//         return {};
//     }
// };
