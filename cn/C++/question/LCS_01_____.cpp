// @algorithm @lc id=1000225 lang=cpp
// @title Ju9Xwi

#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
class Solution
{
public:
    int leastMinutes(int n)
    {
        int res = 0;
        int s = 1;
        while (n > 0)
        {
            if (n > s)
                s <<= 1;
            else
                n -= s;
            res++;
        }
        return res;
    }
};