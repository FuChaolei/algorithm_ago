// @algorithm @lc id=100320 lang=cpp 
// @title shu-zu-zhong-shu-zi-chu-xian-de-ci-shu-lcof

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test("")=""
//异或
class Solution {
public:
    vector<int> singleNumbers(vector<int>& nums) {
        int a = 0, b = 0;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
            sum ^= nums[i];
        int k = 0;
        while(!(sum>>k&1))
            k++;
        for (int i = 0;i<nums.size();i++){
            if(nums[i]>>k&1)
                a ^= nums[i];
        }
        return {a, sum ^ a};
    }
};
//暴力（不合题意）
// class Solution
// {
// public:
//     vector<int> singleNumbers(vector<int> &nums)
//     {
//         sort(nums.begin(), nums.end());
//         int a, b, f = 0;
//         for (int i = 0; i < nums.size(); i++)
//         {
//             if (i < nums.size() - 1 && nums[i] == nums[i + 1])
//                 i++;
//             else if (f == 0)
//             {
//                 a = nums[i];
//                 f = 1;
//             }
//             else if (i == nums.size() - 1)
//                 return {a, nums[i]};
//             else
//             {
//                 return {a, nums[i]};
//             }
//         }
//         return {};
//     }
// };