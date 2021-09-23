// @algorithm @lc id=2107 lang=cpp weekname=weekly-contest-255
// @title find-unique-binary-string

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test(["01","10"])="11"
// @test(["00","01"])="11"
// @test(["111","011","001"])="101"
class Solution
{
public:
    string findDifferentBinaryString(vector<string> &nums)
    {
        string res;
        int n = nums.size();
        if (n == 1)
        {
            if (nums[0] == "1")
                return "0";
            return "1";
        }
        for (int i = 0; i < n; i++)
        {
            res += "1";
        }
        int i;
        for (i = 0; i < n; i++)
        {
            if (find(nums.begin(), nums.end(), res) != nums.end())
            {
                res[i] = '0';
                continue;
            }
            else
            {
                return res;
            }
        }
        if (i == n)
        {
            res[0] = '0';
            res[1] = '0';
        }
        return res;
    }
};