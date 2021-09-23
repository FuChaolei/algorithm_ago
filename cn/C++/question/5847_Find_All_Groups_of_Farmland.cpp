// @algorithm @lc id=2103 lang=cpp weekname=biweekly-contest-60
// @title find-all-groups-of-farmland

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test([[1,0,0],[0,1,1],[0,1,1]])=[[0,0,0,0],[1,1,2,2]]
// @test([[1,1],[1,1]])=[[0,0,1,1]]
// @test([[0]])=[]
class Solution
{
public:
    vector<vector<int>> findFarmland(vector<vector<int>> &land)
    {
        vector<vector<int>> res;
        for (int i = 0; i < land.size(); i++)
        {
            for (int j = 0; j < land[0].size(); j++)
            {
                if (land[i][j] != 0 && land[i][j] != 2)
                    jude(land, i, j, res);
            }
        }
        return res;
    }

private:
    //vector<vector<int>> d{{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    void jude(vector<vector<int>> &land, int c, int r, vector<vector<int>> &res)
    {
        vector<int> p;
        p.emplace_back(c);
        p.emplace_back(r);
        int cc = land.size() - 1, rr = land[0].size() - 1, i,j;
        for (j = c; j < land.size(); j++)
        {
            for (i = r; i < land[0].size(); i++)
            {
                if (land[j][i] == 1)
                {
                    land[j][i] = 2;
                }
                else if (land[j][r] == 0)
                {
                    cc = j - 1;
                    p.emplace_back(cc);
                    p.emplace_back(rr);
                    res.emplace_back(p);
                    return;
                }
                else if(land[j][i] == 0)
                {
                    rr = i-1;
                    break;
                }
            }
            if(i==land[0].size())
                rr = land[0].size() - 1;
        }
        if (j == land.size())
        {
            cc = j - 1;
            p.emplace_back(cc);
            p.emplace_back(rr);
        }
        res.emplace_back(p);
        return;
    }
};