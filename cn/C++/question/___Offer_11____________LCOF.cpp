// @algorithm @lc id=100278 lang=cpp
// @title xuan-zhuan-shu-zu-de-zui-xiao-shu-zi-lcof

#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test([3,3,1,3])=1
class Solution
{
public:
    int minArray(vector<int> &n)
    {
        int l = 0;
        int r = n.size() - 1;
        while (l < r)
        {
            int mid = l + (r - l) / 2;
            if (n[mid] > n[r])
                l = mid + 1;
            else if (n[mid] < n[r])
            {
                r = mid;
            }
            else
            {
                r--;
            }
        }
        return n[l];
    }
};