// @algorithm @lc id=1000228 lang=cpp
// @title xoh6Oh

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test(15,2)=7
// @test(-2147483648,2)=-1073741824
class Solution
{
public:
    int divide(int a, int b)
    {
        if (a == INT_MIN && b == -1)
            return INT_MAX;
        if (b == 1)
            return a;
        int f = 1;
        if ((a < 0 && b > 0) || (a > 0 && b < 0))
        {
            f = -1;
        }
        long aa = a;
        long bb = b;
        aa = aa > 0 ? aa : -aa;
        bb = bb > 0 ? bb : -bb;
        return f * div(aa, bb);
    }

private:
    int div(long a, long b)
    {
        if (a < b)
            return 0;
        long c = 1;
        long tb = b;
        while ((tb + tb) <= a)
        {
            tb += tb;
            c += c;
        }
        return c + div(a - tb, b);
    }
};
//暴力超时
// class Solution
// {
// public:
//     int divide(int a, int b)
//     {
//         if(a==0)
//         return 0;
//         if(b==1)
//         return a;
//         if(b==-1&&a!=INT_MIN)
//         return -a;
//         int res = 0;
//         int f = 1;
//         long long t;
//         if (a == INT_MIN && b == -1)
//             return INT_MAX;
//         if ((b < 0 && a > 0) || (b > 0 && a < 0))
//         {
//             f = -1;
//         }
//         a = abs(a);
//         b = abs(b);
//         t = b;
//         for (int i = 0; t <= a; i++)
//         {
//             res++;
//             t += b;
//         }
//         return res * f;
//     }
// };
