// @algorithm @lc id=100201 lang=cpp
// @title color-fill-lcci

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
    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int newColor)
    {
        oldColor = image[sr][sc];
        if (oldColor == newColor)
            return image;
        dfs(image, sr, sc, newColor);
        return image;
    }

private:
    vector<vector<int>> dir{{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    int oldColor;
    void dfs(vector<vector<int>> &image, int sr, int sc, int &newColor)
    {
        if (sr < 0 || sc < 0 || sr >= image.size() || sc >= image[0].size() || image[sr][sc] != oldColor)
            return;
        image[sr][sc] = newColor;
        for (int i = 0; i < 4; i++)
        {
            dfs(image, sr + dir[i][0], sc + dir[i][1], newColor);
        }
    }
};