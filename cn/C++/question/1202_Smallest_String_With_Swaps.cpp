// @algorithm @lc id=1308 lang=cpp
// @title smallest-string-with-swaps

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test("dcab",[[0,3],[1,2]])="bacd"
// @test("dcab",[[0,3],[1,2],[0,2]])="abcd"
// @test("cba",[[0,1],[1,2]])="abc"
class Solution
{
public:
    string smallestStringWithSwaps(string s, vector<vector<int>> &pairs)
    {
        int n = s.size();
        vector<int> p(n);
        iota(p.begin(), p.end(), 0);
        function<int(int)> find = [&](int x)
        {
            return find(x) == x ? x : p[x] = find(p[x]);
        };
        for (auto it : pairs)
        {
            p[find(it[0])] = find(it[1]);
        }
        vector<vector<int>> idx(n);
        vector<string> ids(n);
        for (int i = 0; i < n; i++)
        {
            int id = find(i);
            idx[id].emplace_back(i);
            ids[id].push_back(s[i]);
        }
        for (int i = 0; i < n; i++)
        {
            sort(ids[i].begin(), ids[i].end());
            for (int k = 0; k < idx[i].size(); k++)
            {
                s[idx[i][k]] = ids[i][k];
            }
        }
        return s;
    }
};
