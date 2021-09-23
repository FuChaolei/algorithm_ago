// @algorithm @lc id=2114 lang=cpp weekname=weekly-contest-256
// @title minimum-number-of-work-sessions-to-finish-the-tasks

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test([1,2,3],3)=2
// @test([3,1,3,1,1],8)=2
// @test([1,2,3,4,5],15)=1
class Solution
{
public:
    int minSessions(vector<int> &tasks, int sessionTime)
    {
        sort(tasks.begin(), tasks.end());
        int l = 0, r = tasks.size() - 1;
    }
};