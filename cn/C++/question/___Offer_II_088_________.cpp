// @algorithm @lc id=1000243 lang=cpp
// @title GzCJIP

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
    int minCostClimbingStairs(vector<int> &cost)
    {
        int f = 0;
        int s = 0;
        for (int i = 2; i <= cost.size(); i++)
        {
            int t = s;
            s = min(s + cost[i - 1], f + cost[i - 2]);
            f = t;
        }
        return s;
    }
};

//普通动规
// class Solution
// {
// public:
//     int minCostClimbingStairs(vector<int> &cost)
//     {
//         int n = cost.size();
//         vector<int> dp(n + 1);
//         dp[0] = 0;
//         dp[1] = 0;
//         for (int i = 2; i <= n; i++)
//         {
//             dp[i] = min(dp[i - 1] + cost[i - 1], dp[i - 2] + cost[i - 2]);
//         }
//         return dp[n];
//     }
// };
