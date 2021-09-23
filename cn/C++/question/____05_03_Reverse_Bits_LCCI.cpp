// @algorithm @lc id=100230 lang=cpp
// @title reverse-bits-lcci

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test(2147483646)=31
// @test(2147483647)=32
// @test(-1)=32
class Solution
{
public:
    int reverseBits(int num)
    {
        int r = 0, l = 0, m = 0; //以0为分界点，L是0左边连续1的数量，R是0右边连续1的数量，Max记录最大值
        for (int i = 0; i < 32; i++)
        {
            if (num & 1)
                r++;
            else
            {
                if (r + l + 1 > m)
                    m = r + l + 1;
                l = r;
                r = 0;
            }
            num >>= 1;
        }
        if (r + l + 1 > m)
            m = r + l + 1;
        if (m == 33)
            return 32;
        return m;
    }
};