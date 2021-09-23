// @algorithm @lc id=2099 lang=cpp weekname=weekly-contest-254
// @title number-of-strings-that-appear-as-substrings-in-word

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test(["a","abc","bc","d"],"abc")=3
// @test(["a","b","c"],"aaaaabbbbb")=2
// @test(["a","a","a"],"ab")=3
class Solution
{
public:
    int numOfStrings(vector<string> &patterns, string word)
    {
        int res = 0;
        for (int i = 0; i < patterns.size(); i++)
        {
            if (word.find(patterns[i]) != -1)
                res++;
        }
        return res;
    }
};