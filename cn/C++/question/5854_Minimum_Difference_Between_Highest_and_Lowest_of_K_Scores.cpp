// @algorithm @lc id=2112 lang=cpp weekname=weekly-contest-256
// @title minimum-difference-between-highest-and-lowest-of-k-scores

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test([90],1)=0
// @test([9,4,1,7],2)=2
class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        if(k==1)
            return 0;
        sort(nums.begin(), nums.end());
        int res = INT_MAX;
        for (int i = 0; i < nums.size()-k+1; i++)
        {
            res = min(res, nums[i + k-1] - nums[i]);
            if(res==0)
                return 0;
        }
        return res;
    }
};