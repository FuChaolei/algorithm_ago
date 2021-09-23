// @algorithm @lc id=792 lang=cpp
// @title binary-search

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test([-1,0,3,5,9,12],9)=4
// @test([-1,0,3,5,9,12],2)=-1
// @test([5], 5)=0
class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int r = nums.size() - 1;
        int l = 0;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] < target)
                l = mid + 1;
            else
            {
                r = mid - 1;
            }
        }
        return -1;
    }
};

// class Solution
// {
// public:
//     int search(vector<int> &nums, int target)
//     {
//         int l = 0, r = nums.size() - 1;
//         while (l <= r)
//         {
//             int mid = l + (r - l) / 2;
//             if (nums[mid] == target)
//                 return mid;
//             else if (nums[mid] > target)
//                 r = mid - 1;
//             else
//                 l = mid + 1;
//         }
//         return -1;
//     }
// };
