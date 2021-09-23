// @algorithm @lc id=2089 lang=cpp weekname=biweekly-contest-59
// @title maximum-matrix-sum

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution
{
public:
    long long maxMatrixSum(vector<vector<int>> &matrix)
    {
        int m = matrix.size();
        int n = matrix[0].size();
        long long res = 0;
        int c = 0;
        int min_ = INT_MAX;
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                res += abs(matrix[i][j]);
                if (matrix[i][j] < 0)
                    c++;
                min_ = min(min_, abs(matrix[i][j]));
            }
        }
        if (c % 2 == 0)
            return res;
        else
        {
            return res - 2 * min_;
        }
    }
};