// @algorithm @lc id=100107 lang=cpp
// @title guess-numbers

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test("")=""
// @test([1,2,3],[1,2,3])=3
class Solution
{
public:
    int game(vector<int> &g, vector<int> &a)
    {
        return (a[0] == g[0]) + (g[1] == a[1]) + (g[2] == a[2]);
    }
};