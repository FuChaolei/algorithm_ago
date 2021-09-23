// @algorithm @lc id=1000333 lang=cpp
// @title B1IidL

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test([0,1,0])=1
// @test([3,4,5,1])=2
class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {
        int l = 0;
        int r = arr.size() - 1;
        while (l < r)
        {
            int mid = l + (r - l) / 2;
            if (arr[mid] > arr[mid + 1])
            {
                r = mid;
            }
            else
            {
                l = mid + 1;
            }
        }
        return l;
    }
};
// class Solution
// {
// public:
//     int peakIndexInMountainArray(vector<int> &arr)
//     {
//         return distance(arr.begin(), max_element(arr.begin(),arr.end()));
//     }
// };
//暴力
// class Solution {
// public:
//     int peakIndexInMountainArray(vector<int>& arr) {
//         for (int i = 0; i < arr.size()-1;i++){
//             if(arr[i]>arr[i+1])
//             return i;
//         }
//         return arr.size() - 1;
//     }
// };
