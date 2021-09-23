// @algorithm @lc id=948 lang=cpp
// @title sort-an-array

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test([5,2,3,1])=[1,2,3,5]
// @test([5,1,1,2,0,0])=[0,0,1,1,2,5]
// @test([5,2,3,1])=[1,2,3,5]
class Solution
{
public:
    vector<int> sortArray(vector<int> &nums)
    {
        int n = nums.size() - 1;
        srand(time(NULL));
        quickSort(nums, 0, n);
        return nums;
    }

private:
    void quickSort(vector<int> &nums, int l, int r)
    {
        if (l > r)
            return;
        int m = rand() % (r - l + 1) + l;
        swap(nums[l], nums[m]);
        int t = nums[l];
        int i = l;
        int j = r;
        while (i < j)
        {
            while (nums[j] >= t && i < j)
                j--;
            while (nums[i] <= t && i < j)
                i++;
            swap(nums[i], nums[j]);
        }
        swap(nums[l], nums[i]);
        quickSort(nums, l, i - 1);
        quickSort(nums, i + 1, r);
    }
};

// class Solution
// {
// public:
//     vector<int> sortArray(vector<int> &nums)
//     {
//         quickSort(nums, 0, nums.size() - 1);
//         return nums;
//     }
// private:
//     void quickSort(vector<int> &nums, int l, int r)
//     {
//         if (l > r)
//             return;
//         srand((unsigned int)time(NULL));
//         int m = rand() % (r - l + 1) + l;
//         swap(nums[l], nums[l]);
//         int t = nums[l];
//         int i = l;
//         int j = r;
//         while (i != j)
//         {
//             while (j > i && nums[j] >= t)
//             {
//                 j--;
//             }
//             while (j > i && nums[i] <= t)
//                 i++;
//             swap(nums[i], nums[j]);
//         }
//         swap(nums[i], t);
//         quickSort(nums, 0, i - 1);
//         quickSort(nums, i + 1, nums.size());
//     }
// };
