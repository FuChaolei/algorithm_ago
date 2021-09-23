// @algorithm @lc id=100355 lang=cpp
// @title master-mind-lcci

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test("BRBB", "RBGY")=[0,2]
// @test("YBBY", "GYYB")=[0,3]
// @test("GGBB", "RBYB")=[1,1]
class Solution
{
public:
    vector<int> masterMind(string s, string g)
    {
        int a = 0, b = 0;
        for (int i = 0; i < 4; i++)
        {
            if (s[i] == g[i])
            {
                a++;
                s[i] = '1';
                g[i] = '2';
            }
        }
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                if (s[i] == g[j])
                {
                    b++;
                    g[j] = '0';
                    break;
                }
            }
        }
        return {a, b};
    }
};