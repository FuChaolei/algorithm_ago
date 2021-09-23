// @algorithm @lc id=215 lang=cpp
// @title kth-largest-element-in-an-array

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test([3,2,1,5,6,4],2)=5
// @test([3,2,3,1,2,4,5,5,6],4)=4
class Solution
{
public:
    int findKthLargest(vector<int> &nums, int k)
    {
        int n = nums.size();
        srand(time(NULL));
        return quickSort(nums, 0, n - 1, k);
    }

private:
    int quickSort(vector<int> &nums, int l, int r, int &k)
    {
        int m = rand() % (r - l + 1) + l;
        swap(nums[l], nums[m]);
        int t = nums[l];
        int x = l, y = r;
        while (x < y)
        {
            while (nums[y] <= t && y > x)
            {
                y--;
            }
            while (nums[x] >= t && y > x)
            {
                x++;
            }
            swap(nums[x], nums[y]);
        }
        swap(nums[l], nums[x]);
        if (x == k - 1)
            return nums[x];
        else if (x < k - 1)
            return quickSort(nums, x + 1, r, k);
        else
        {
            return quickSort(nums, l, x - 1, k);
        }
    }
};
//class Solution {
// public:
//     int findKthLargest(vector<int>& nums, int k) {
//         sort(nums.begin(), nums.end(), greater<>());
//         return nums[k-1];
//     }
// };