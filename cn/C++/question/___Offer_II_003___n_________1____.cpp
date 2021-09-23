// @algorithm @lc id=1000230 lang=cpp
// @title w3tCBm

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
    vector<int> countBits(int n)
    {
        vector<int> res(n + 1);
        for (int i = 1; i <= n; i++)
        {
            res[i] = res[i & (i - 1)] + 1;
        }
        return res;
    }
};
//暴力
// class Solution
// {
// public:
//     vector<int> countBits(int n)
//     {
//         vector<int> res;
//         for (int i = 0; i <= n; i++)
//         {
//             int m = i;
//             int t = 0;
//             while (m)
//             {
//                 m &= (m - 1);
//                 t++;
//             }
//             res.emplace_back(t);
//         }
//         return res;
//     }
// };
