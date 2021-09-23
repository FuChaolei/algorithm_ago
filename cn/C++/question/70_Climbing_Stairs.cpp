// @algorithm @lc id=70 lang=cpp
// @title climbing-stairs

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test(2)=2
// @test(3)=3
// @test(3)=3
class Solution
{
public:
    int climbStairs(int n)
    {
        // if (n == 0)
        //     return 0;
        // if (n == 1)
        //     return 1;
        // if (n == 2)
        //     return 2;
        // return climbStairs(n - 2) + climbStairs(n - 1);
        if (n == 0)
            return 0;
        if (n == 1)
            return 1;
        if (n == 2)
            return 2;
        int f = 1, s = 2;
        for (int i = 3; i <= n; i++)
        {
            int t = s;
            s = f + s;
            f = t;
        }
        return s;
    }
};