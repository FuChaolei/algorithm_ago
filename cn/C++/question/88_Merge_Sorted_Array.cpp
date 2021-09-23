// @algorithm @lc id=88 lang=cpp
// @title merge-sorted-array

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test([1,2,3,0,0,0],3,[2,5,6],3)=[1,2,2,3,5,6]
// @test([1],1,[],0)=[1]
// @test([0],0,[1],1)=[1]
class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        n--;
        m--;
        int i = nums1.size() - 1;
        while (n + 1)
        {
            while (m >= 0 && nums1[m] > nums2[n])
            {
                nums1[i] = nums1[m];
                m--;
                i--;
            }
            nums1[i] = nums2[n];
            i--;
            n--;
        }
    }
};