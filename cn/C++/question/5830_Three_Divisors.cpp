// @algorithm @lc id=2083 lang=cpp weekname=weekly-contest-252
// @title three-divisors

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test("")=""
// @test(2)=false
// @test(4)=true
class Solution {
public:
    bool isThree(int n) {
        int res = 0;
        if(n==1)
            return 0;
        if(n==2)
            return 0;
        for (int i = 2; i <n; i++)
        {
            if(n%i==0)
                res++;
            if(res>1)
                return false;
        }
        return res == 1;
    }
};