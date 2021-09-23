// @algorithm @lc id=100293 lang=cpp
// @title shun-shi-zhen-da-yin-ju-zhen-lcof

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test([[1,2,3],[4,5,6],[7,8,9]])=[1,2,3,6,9,8,7,4,5]
class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &ma)
    {
        if (ma.size() == 0)
            return {};
        int m = ma.size(), n = ma[0].size();
        vector<int> res(m * n);
        vector<vector<bool>> s(m, vector<bool>(n));
        vector<int> dc{0, 1, 0, -1};
        vector<int> dr{1, 0, -1, 0};
        int c = 0, r = 0, d = 0;
        for (int i = 0; i < m * n; i++)
        {
            res[i] = ma[c][r];
            s[c][r] = 1;
            int a = c + dc[d];
            int b = r + dr[d];
            if (a < 0 || a >= m || b < 0 || b >= n || s[a][b] == 1)
            {
                d = (d + 1) % 4;
                a = c + dc[d];
                b = r + dr[d];
            }
            c = a, r = b;
        }
        return res;
    }
};