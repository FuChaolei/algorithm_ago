// @algorithm @lc id=15 lang=cpp
// @title 3sum

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test([-1,0,1,2,-1,-4])=[[-1,-1,2],[-1,0,1]]
// @test([])=[]
// @test([0])=[]
class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        set<vector<int>> res;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > 0)
                return vector<vector<int>>(res.begin(), res.end());
            int l = i + 1, r = nums.size() - 1;
            while (l < r)
            {
                if (nums[i] + nums[l] + nums[r] == 0)
                {
                    res.insert({nums[i], nums[l], nums[r]});
                    r--;
                    l++;
                }
                else if (nums[i] + nums[l] + nums[r] < 0)
                {
                    l++;
                }
                else
                {
                    r--;
                }
            }
        }
        return vector<vector<int>>(res.begin(), res.end());
    }
};
// class Solution
// {
// public:
//     vector<vector<int>> threeSum(vector<int> &nums)
//     {
//         set<vector<int>> st;
//         sort(nums.begin(), nums.end());
//         for (int i = 0; i < nums.size(); i++)
//         {
//             int j = i + 1, k = nums.size() - 1;
//             while (j < k)
//             {
//                 if (nums[j] + nums[k] == -nums[i])
//                 {
//                     st.insert({nums[i], nums[j], nums[k]});
//                     j++;
//                     k--;
//                 }
//                 else if (nums[j] + nums[k] < -nums[i])
//                 {
//                     j++;
//                 }
//                 else
//                 {
//                     k--;
//                 }
//             }
//         }
//         return vector<vector<int>>(st.begin(), st.end());
//     }
// };
//暴力TLE
// class Solution
// {
// public:
//     vector<vector<int>> threeSum(vector<int> &nums)
//     {
//         sort(nums.begin(), nums.end());
//         set<vector<int>> res;
//         for (int i = 0; i < nums.size(); i++)
//         {
//             for (int j = i + 1; j < nums.size(); j++)
//             {
//                 for (int k = j + 1; k < nums.size(); k++)
//                 {
//                     if (nums[i] + nums[j] + nums[k] == 0)
//                         res.insert({nums[i], nums[j], nums[k]});
//                 }
//             }
//         }
//         return vector<vector<int>>(res.begin(), res.end());
//     }
// };
