// @algorithm @lc id=1000231 lang=cpp
// @title JFETK5

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test("")=""
class Solution
{
public:
    string addBinary(string a, string b)
    {
        int t = max(a.size(), b.size()) + 1;
        string s(t, '0');
        reverse(a.begin(), a.end());
        while (a.size() < t)
            a += '0';
        reverse(b.begin(), b.end());
        while (b.size() < t)
            b += '0';
        for (int i = 0; i < t - 1; i++)
        {
            int t = (a[i] - '0') + (b[i] - '0');
            if (t == 2)
            {
                s[i + 1] += 1;
            }
            else if (t == 1)
            {
                if (s[i] == '1')
                {
                    s[i] = '0';
                    s[i + 1] += 1;
                }
                else
                {
                    s[i] = '1';
                }
            }
        }
        if (s.back() == '0')
            s.pop_back();
        reverse(s.begin(), s.end());
        return s;
    }
};