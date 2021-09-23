// @algorithm @lc id=1000140 lang=cpp
// @title ccw6C7

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test(2,4)=1
// @test(3,8)=9
// @test(1,0)=1
class Solution
{
public:
    int paintingPlan(int n, int k)
    {
        if (k == 0)
            return 1;
        if (k < n)
            return 0;
        if (k == n * n)
            return 1;
        int res = 0;
        int t = jiec(n);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if ((j * n + i * n - i * j) == k)
                {
                    res += t * t / ((jiec(i) * jiec(n - i)) * (jiec(j) * jiec(n - j)));
                }
            }
        }
        return res;
    }

private:
    int jiec(int n)
    {
        int res = 1;
        for (int i = 1; i <= n; i++)
        {
            res *= i;
        }
        return res;
    }
};