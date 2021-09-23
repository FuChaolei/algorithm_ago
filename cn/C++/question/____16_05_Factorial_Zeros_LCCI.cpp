// @algorithm @lc id=1000017 lang=cpp
// @title factorial-zeros-lcci

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test(3)=0
// @test(5)=1
// @test(10)=2
// @test(30)=7
// @test(3125)=781
class Solution
{
public:
    int trailingZeroes(int n)
    {
        int res = 0;
        while (n)
        {
            n /= 5;
            res += n;
        }
        return res;
    }
};