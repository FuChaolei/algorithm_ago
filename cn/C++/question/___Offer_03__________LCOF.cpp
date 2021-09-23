// @algorithm @lc id=100275 lang=cpp 
// @title shu-zu-zhong-zhong-fu-de-shu-zi-lcof

#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (size_t i = 0; i < nums.size() - 1; i++)
        {
            if(nums[i]==nums[i+1])
                return nums[i];
        }
        return -1;
    }
};