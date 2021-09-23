// @algorithm @lc id=100180 lang=cpp
// @title insert-into-bits-lcci

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test("")=""
class Solution
{
public:
    int insertBits(int N, int M, int i, int j)
    {
        for (int k = i; k <= j; k++)
        {
            if (N & 1 << k)
                N -= 1 << k;
        }
        N += M << i;
        return N;
    }
};