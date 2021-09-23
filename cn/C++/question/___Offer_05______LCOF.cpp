// @algorithm @lc id=100280 lang=cpp
// @title ti-huan-kong-ge-lcof

#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
class Solution
{
public:
    string replaceSpace(string s)
    {
        if (s == "")
            return s;
        string res = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ')
            {
                res += "%20";
                continue;
            }
            else
            {
                res += s[i];
            }
        }
        return res;
    }
};