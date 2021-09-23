// @algorithm @lc id=100345 lang=cpp 
// @title qiu-12n-lcof

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test("")=""
class Solution {
public:
    int sumNums(int n) {
        if(n==1)
            return 1;
        return n + sumNums(n - 1);
    }
};