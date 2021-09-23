// @algorithm @lc id=2106 lang=cpp weekname=weekly-contest-255
// @title find-greatest-common-divisor-of-array

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test([2,5,6,9,10])=2
// @test([7,5,6,8,3])=1
// @test([3,3])=3
class Solution
{
public:
    int findGCD(vector<int> &nums)
    {
        return __gcd(*max_element(nums.begin(), nums.end()), *min_element(nums.begin(), nums.end()));
    }
};