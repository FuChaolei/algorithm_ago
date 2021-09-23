// @algorithm @lc id=2080 lang=cpp weekname=biweekly-contest-58
// @title check-if-move-is-legal

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test([[".",".",".","B",".",".",".","."],[".",".",".","W",".",".",".","."],[".",".",".","W",".",".",".","."],[".",".",".","W",".",".",".","."],["W","B","B",".","W","W","W","B"],[".",".",".","B",".",".",".","."],[".",".",".","B",".",".",".","."],[".",".",".","W",".",".",".","."]],4,3,"B")=true
// @test([[".",".",".",".",".",".",".","."],[".","B",".",".","W",".",".","."],[".",".","W",".",".",".",".","."],[".",".",".","W","B",".",".","."],[".",".",".",".",".",".",".","."],[".",".",".",".","B","W",".","."],[".",".",".",".",".",".","W","."],[".",".",".",".",".",".",".","B"]],4,4,"W")=false
class Solution
{
public:
    bool checkMove(vector<vector<char>> &b, int r, int c, char co)
    {
        int m = b.size();
        int n = b[0].size();
        b[r][c] = co;
        for (int i = 0; i < 8; i++)
        {
            int f = 0;
            int rr = r + d[i][0];
            int cc = c + d[i][1];
            while (rr < m && rr >= 0 && cc < n && cc >= 0 && b[rr][cc] != '.' && b[rr][cc] != b[r][c])
            {
                rr = rr + d[i][0];
                cc = cc + d[i][1];
                f = 1;
            }
            if (rr < m && rr >= 0 && cc < n && cc >= 0 && b[rr][cc] != '.' && b[rr][cc] == b[r][c] && f == 1)
            {
                return true;
            }
        }
        return false;
    }

private:
    vector<vector<int>> d{{-1, 0}, {-1, 1}, {0, 1}, {1, 1}, {1, 0}, {1, -1}, {0, -1}, {-1, -1}};
};
