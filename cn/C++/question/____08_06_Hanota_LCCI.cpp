// @algorithm @lc id=1000015 lang=cpp
// @title hanota-lcci

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
    void hanota(vector<int> &A, vector<int> &B, vector<int> &C)
    {
        int n = A.size();
        move(n, A, B, C);
    }

private:
    void move(int n, vector<int> &A, vector<int> &B, vector<int> &C)
    {
        if (n == 1)
        {
            C.emplace_back(A.back());
            A.pop_back();
            return;
        }
        move(n - 1, A, C, B);
        C.emplace_back(A.back());
        A.pop_back();
        move(n - 1, B, A, C);
    }
};