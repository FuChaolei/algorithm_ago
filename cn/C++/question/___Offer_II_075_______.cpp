// @algorithm @lc id=1000339 lang=cpp
// @title 0H97ZC

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test([2,21,43,38,0,42,33,7,24,13,12,27,12,24,5,23,29,48,30,31],[2,42,38,0,43,21])=[2,42,38,0,43,21,5,7,12,12,13,23,24,24,27,29,30,31,33,48]
class Solution
{
public:
    vector<int> relativeSortArray(vector<int> &arr1, vector<int> &arr2)
    {
        vector<int> res;
        map<int, int> mp;
        for (int i = 0; i < arr1.size(); i++)
        {
            mp[arr1[i]]++;
        }
        for (int j = 0; j < arr2.size(); j++)
        {
            while (mp[arr2[j]] != 0)
            {
                res.emplace_back(arr2[j]);
                mp[arr2[j]]--;
            }
        }
        for (auto [k, v] : mp)
        {
            while (v != 0)
            {
                res.emplace_back(k);
                v--;
            }
        }
        return res;
    }
};