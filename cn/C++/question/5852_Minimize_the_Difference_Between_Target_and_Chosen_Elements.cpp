// @algorithm @lc id=2108 lang=cpp weekname=weekly-contest-255
// @title minimize-the-difference-between-target-and-chosen-elements

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test([[1,2,3],[4,5,6],[7,8,9]],13)=0
// @test([[1],[2],[3]],100)=94
// @test([[1,2,9,8,7]],6)=1
// @test([[3,5],[5,10]],47)=32
// class Solution
// {
// public:
//     int minimizeTheDifference(vector<vector<int>> &mat, int target)
//     {
//         for (int i = 0; i < mat.size(); i++)
//             sort(mat[i].begin(), mat[i].end());
//         int t;
//         int n = mat.size();
//         int m = mat[0].size();
//         int l = 0, r = m;
//         int resl = 0;
//         int resr = 0;
//         while (l < r)
//         {

//         }
//     }
// };
//dfs

class Solution
{
private:
    int mi = INT_MAX;
    //vector<int> path;
    int res = 0;
    void dfs(vector<vector<int>> &mat, int &target, int c)
    {
        if (mi == 0)
            return;
        if (res - target >= mi)
        {
            return;
        }
        if (c >= mat.size())
        {
            mi = min(mi, abs(res - target));
            return;
        }

        for (int i = 0; i < mat[0].size(); i++)
        {
            //path.push_back(mat[c][i]);
            res += mat[c][i];
            dfs(mat, target, c + 1);
            res -= mat[c][i];
            //path.pop_back();
        }
    }

public:
    int minimizeTheDifference(vector<vector<int>> &mat, int target)
    {
        for (int i = 0; i < mat.size(); i++)
            sort(mat[i].begin(), mat[i].end());
        dfs(mat, target, 0);
        return mi;
    }
};
