// @algorithm @lc id=415 lang=cpp
// @title add-strings

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test("11","123")="134"
// @test("456","77")="533"
// @test("0","0")="0"
class Solution
{
public:
    string addStrings(string num1, string num2)
    {
        if (num2.size() > num1.size())
            swap(num1, num2);
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());
        num1 += "0";
        for (int i = 0; i < num1.size(); i++)
        {
            if (i < num2.size())
                num1[i] = num1[i] + num2[i] - '0';
            if (num1[i] > '9')
            {
                num1[i] -= 10;
                num1[i + 1]++;
            }
        }
        if (num1.back() == '0')
            num1.pop_back();
        reverse(num1.begin(), num1.end());
        return num1;
    }
};