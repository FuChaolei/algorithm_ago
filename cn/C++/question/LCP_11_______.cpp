// @algorithm @lc id=1000086 lang=cpp
// @title qi-wang-ge-shu-tong-ji

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
    int expectNumber(vector<int> &s)
    {
        set<int> st(s.begin(), s.end());
        return st.size();
    }
};