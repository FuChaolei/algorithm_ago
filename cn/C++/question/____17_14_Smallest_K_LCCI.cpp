// @algorithm @lc id=1000021 lang=cpp
// @title smallest-k-lcci

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test([1,3,5,7,2,4,6,8],4)=[1,2,3,4]
class Solution
{
public:
    vector<int> smallestK(vector<int> &arr, int k)
    {
        sort(arr.begin(), arr.end());
        vector<int> res(arr.begin(), arr.begin() + k);
        return res;
    }
};