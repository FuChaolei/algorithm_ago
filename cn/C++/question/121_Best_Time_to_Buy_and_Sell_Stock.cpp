// @algorithm @lc id=121 lang=cpp
// @title best-time-to-buy-and-sell-stock

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test([7,1,5,3,6,4])=5
// @test([7,6,4,3,1])=0
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int res = 0;
        int m = INT_MAX;
        for (int i = 0; i < prices.size(); i++)
        {
            m = min(prices[i], m);
            res = max(prices[i] - m, res);
        }
        return res;
    }
};
// class Solution
// {
// public:
//     int maxProfit(vector<int> &prices)
//     {
//         vector<int> p(prices.size());
//         p[0] = 0;
//         int minp = prices[0];
//         for (int i = 1; i < prices.size(); i++)
//         {
//             minp = min(minp, prices[i]);
//             p[i] = max(p[i - 1], prices[i] - minp);
//         }
//         return p[prices.size() - 1];
//     }
// };
//贪心
// class Solution
// {
// public:
//     int maxProfit(vector<int> &prices)
//     {
//         int k = prices[0];
//         int s = 0;
//         for (int i = 0; i < prices.size(); i++)
//         {
//             k = min(k, prices[i]);
//             s = max(s, prices[i] - k);
//         }
//         return s;
//     }
// };
//暴力TLE
// class Solution
// {
// public:
//     int maxProfit(vector<int> &prices)
//     {
//         int res = 0;
//         for (int i = 0; i < prices.size(); i++)
//         {
//             for (int j = i + 1; j < prices.size(); j++)
//             {
//                 res = max(res, prices[j] - prices[i]);
//             }
//         }
//         return res;
//     }
// };
