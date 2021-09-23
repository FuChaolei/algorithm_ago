// @algorithm @lc id=2122 lang=cpp weekname=weekly-contest-257
// @title count-special-quadruplets

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test([1,2,3,6])=1
// @test([3,3,6,4,5])=0
// @test([1,1,1,3,5])=4
class Solution
{
public:
    int countQuadruplets(vector<int> &nums)
    {
        int a = 0, b = 1, c = 2, d = 3;
        int res = 0;
        for (int i = 3; i < nums.size(); i++)
        {
            for (int a = 0; a < i - 2; a++)
            {
                for (int b = a + 1; b < i - 1; b++)
                {
                    for (int c = b + 1; c < i; c++)
                    {
                        if(nums[a]+nums[b]+nums[c]==nums[i])
                            res++;
                    }
                }
            }
        }
        return res;
    }
};