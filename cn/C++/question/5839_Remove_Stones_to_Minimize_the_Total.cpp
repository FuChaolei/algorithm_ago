// @algorithm @lc id=2094 lang=cpp weekname=weekly-contest-253
// @title remove-stones-to-minimize-the-total

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test([5,4,9],2)=12
// @test([4,3,6,7],3)=12
class Solution
{
public:
    int minStoneSum(vector<int> &p, int k)
    {
        priority_queue<int> q(p.begin(), p.end());
        for (int i = 0; i < k; i++)
        {
            int cur = p.front();
            q.pop();
            q.push(cur - cur / 2);
        }
        int res = 0;
        while (!q.empty())
        {
            res += q.frond();
            q.pop();
        }
        return res;
    }
};