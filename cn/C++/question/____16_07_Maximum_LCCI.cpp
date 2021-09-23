// @algorithm @lc id=100349 lang=cpp
// @title maximum-lcci

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test("")=""
// @test(1,2)=2
class Solution
{
public:
    int maximum(int a, int b)
    {
        long c = long(a);
        long d = long(b);
        long x = c - d;
        int k = (int)(x >> 63);
        return (k + 1) * a - k * b;
    }
};