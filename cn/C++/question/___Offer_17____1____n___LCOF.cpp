// @algorithm @lc id=100296 lang=cpp 
// @title da-yin-cong-1dao-zui-da-de-nwei-shu-lcof


#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
class Solution {
public:
    vector<int> printNumbers(int n) {
        vector<int> res;
        int k = 0;
        while (n--)
        {
            k = k * 10 + 9;
        }
        for (int i = 1; i <= k;i++)
            res.emplace_back(i);
        return res;
    }
};