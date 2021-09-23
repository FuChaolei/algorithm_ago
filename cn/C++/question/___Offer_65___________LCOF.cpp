// @algorithm @lc id=100335 lang=cpp
// @title bu-yong-jia-jian-cheng-chu-zuo-jia-fa-lcof

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test("")=""
// @test(1, 2)=3
// @test(111, 899)=1010
class Solution
{
public:
    int add(int a, int b)
    {
        if (a == 0 || b == 0)
            return a == 0 ? b : a;
        int sum = 0;
        int carry = 0;
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