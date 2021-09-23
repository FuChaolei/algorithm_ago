// @algorithm @lc id=1000276 lang=cpp
// @title lwyVBB

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test(["hello","leetcode"],"hlabcdefgijkmnopqrstuvwxyz")=true
// @test(["word","world","row"],"worldabcefghijkmnpqstuvxyz")=false
// @test(["apple","app"],"abcdefghijklmnopqrstuvwxyz")=false
class Solution
{
public:
    bool isAlienSorted(vector<string> &words, string order)
    {
        char t = 'a' - 1;
        for (int i = 0; i < words.size() - 1; i++)
        {
            int j;
            for (j = 0; j < words[i].size() && j < words[i + 1].size(); j++)
            {
                if (order.find(words[i][j]) > order.find(words[i + 1][j]))
                    return false;
                if (order.find(words[i][j]) == order.find(words[i + 1][j]))
                    continue;
                break;
            }
            if(words[i].size()!=words[i + 1].size()&&j==words[i + 1].size())
                return false;
        }
        return true;
    }
};