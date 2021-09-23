// @algorithm @lc id=1000012 lang=cpp
// @title sorted-merge-lcci

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
    void merge(vector<int> &A, int m, vector<int> &B, int n)
    {
        int j = 0;
        for (int i = 0; j < n && i < m + n; i++)
        {
            if (A[i] == 0)
            {
                A[i] = B[j];
                j++;
            }
        }
        sort(A.begin(), A.end());
    }
};