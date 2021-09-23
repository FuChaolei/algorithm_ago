// @algorithm @lc id=100310 lang=cpp 
// @title shu-zu-zhong-chu-xian-ci-shu-chao-guo-yi-ban-de-shu-zi-lcof

#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
class Solution {
// @test([2,2,1,1,1,2,2])=2
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size();i++){
            mp[nums[i]]++;
            if(mp[nums[i]]>nums.size()/2)
                return nums[i];
        }
            return 0;
    }
};