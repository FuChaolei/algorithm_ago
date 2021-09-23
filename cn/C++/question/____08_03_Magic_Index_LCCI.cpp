// @algorithm @lc id=100240 lang=cpp
// @title magic-index-lcci

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test([0,2,3,4,5])=0
// @test([1,1,1])=1
class Solution
{
public:
    int findMagicIndex(vector<int> &nums)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == i)
                return i;
        }
        return -1;
    }
};