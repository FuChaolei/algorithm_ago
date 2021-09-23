// @algorithm @lc id=100242 lang=cpp
// @title sparse-array-search-lcci

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test("")=""
// @test(["at","","","","ball","","","car","","","dad","",""],"ta")=-1
// @test(["at","","","","ball","","","car","","","dad","",""],"ball")=4
class Solution
{
public:
    int findString(vector<string> &words, string s)
    {
        for (int i = 0; i < words.size(); i++)
            if (words[i] == s)
                return i;
        return -1;
    }
};