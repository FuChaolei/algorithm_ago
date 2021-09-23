// @algorithm @lc id=100274 lang=cpp
// @title fei-bo-na-qi-shu-lie-lcof

#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test([[1,2,3],[4,5,6],[7,8,9]])=[1,2,3,6,9,8,7,4,5]
class Solution
{
public:
    int fib(int n)
    {
        if (n == 0)
            return 0;
        if (n == 1)
            return 1;
        int f = 0, s = 1;
        for (int i = 2; i <= n; i++)
        {
            int t = f;
            f = s;
            s = (t + f)%1000000007;
        }
        return s;
    }
};