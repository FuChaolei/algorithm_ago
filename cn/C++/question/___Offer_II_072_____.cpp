// @algorithm @lc id=1000336 lang=cpp
// @title jJ0w9p

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test("")=""
// @test(2)=1
class Solution
{
public:
    int mySqrt(int x)
    {
        if (x <= 1)
            return x;
        for (long long i = 1; i <= x; i++)
        {
            long long t = i * i;
            if (x < t)
                return i - 1;
        }
        return -1;
    }
};