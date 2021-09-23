// @algorithm @lc id=100327 lang=cpp
// @title li-wu-de-zui-da-jie-zhi-lcof

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test([[1,2,5],[3,2,1]])=9
class Solution
{
public:
    int maxValue(vector<vector<int>> &grid)
    {
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>> ans(m + 1, vector<int>(n + 1));
        for (int i = 1; i < m + 1; i++)
        {
            for (int j = 1; j < n + 1; j++)
            {
                ans[i][j] = max(ans[i - 1][j], ans[i][j - 1]) + grid[i - 1][j - 1];
            }
        }
        return ans[m][n];
    }
};