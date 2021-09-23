// @algorithm @lc id=100328 lang=cpp 
// @title fan-zhuan-dan-ci-shun-xu-lcof

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test("")=""
class Solution {
public:
    string reverseWords(string s) {
        stringstream w(s);
        string t;
        string res;
        string k = " ";
        while (w >> t)
        {
            k += t;
            k+=res;
            res = k;
            k = " ";
        }
        if(res.size()==0)
            return res;
        return res.substr(1, res.size() - 1);
    }
};