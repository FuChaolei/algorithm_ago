// @algorithm @lc id=1000025 lang=cpp
// @title add-without-plus-lcci

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test("")=""
// @test(1,1)=2
class Solution
{
public:
    int add(int a, int b)
    {
        if (a == 0 || b == 0)
            return a == 0 ? b : a;
        int sum, carry;
        while (b)
        {
            sum = a ^ b;
            carry = (unsigned int)(a & b) << 1;
            a = sum;
            b = carry;
        }
        return a;
    }
};