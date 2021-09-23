// @algorithm @lc id=100181 lang=cpp
// @title convert-integer-lcci

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
    int convertInteger(int A, int B)
    {
        int res = 0;
        unsigned int n = A ^ B;
        while (n)
        {
            n &= (n - 1);
            res++;
        }
        return res;
    }
};