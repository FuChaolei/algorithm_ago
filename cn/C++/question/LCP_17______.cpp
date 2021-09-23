// @algorithm @lc id=1000139 lang=cpp
// @title nGK0Fy

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
    int calculate(string s)
    {
        int x = 1, y = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'A')
                x = x * 2 + y;
            else
                y = y * 2 + x;
        }
        return x + y;
    }
};