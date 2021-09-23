// @algorithm @lc id=69 lang=cpp
// @title sqrtx

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test(4)=2
// @test(8)=2
// @test(0)=0
class Solution
{
public:
    int mySqrt(int x)
    {
        int l = 0, r = x;
        int res = -1;
        while (l <= r)
        {
            long long mid = (long long)(l + (r - l) / 2);
            if (mid * mid <= x)
            {
                res = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        return res;
    }
};