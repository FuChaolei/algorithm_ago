// @algorithm @lc id=1000146 lang=cpp
// @title 2vYnGI

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test([10,20,5],[5,5,2],15)=6
class Solution
{
public:
    int breakfastNumber(vector<int> &s, vector<int> &d, int x)
    {
        int res = 0;
        int n = s.size();
        int m = d.size();
        sort(s.begin(), s.end());
        sort(d.begin(), d.end());
        int j = m - 1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] + d[0] > x)
                break;
            while (j >= 0 && s[i] + d[j] > x)
                j--;
            if (j == -1)
                break;
            res += j + 1;
            res %= 1000000007;
        }
        return res;
    }
};
// class Solution
// {
// public:
//     int breakfastNumber(vector<int> &staple, vector<int> &drinks, int x)
//     {
//         const int mod = 1e9 + 7;
//         int ans = 0;
//         sort(staple.begin(), staple.end());
//         sort(drinks.begin(), drinks.end());
//         int j = drinks.size() - 1;
//         for (int i = 0; i < staple.size(); i++)
//         {
//             while (j >= 0 && staple[i] + drinks[j] > x)
//                 j--;
//             if (j == -1)
//                 break;
//             ans += j + 1;
//             ans %= mod;
//         }
//         return ans;
//     }
// };