// @algorithm @lc id=4 lang=cpp
// @title median-of-two-sorted-arrays

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test([0,0],[0,0])=0.00000
// @test([],[1])=1.00000
// @test([2],[])=2.00000
// @test([1,3],[2])=2.00000
// @test([1,2],[3,4])=2.50000
class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        int n = nums1.size(), m = nums2.size();
        if (n > m)
            return findMedianSortedArrays(nums2, nums1);
        int k = (m + n + 1) / 2;
        int l = 0, r = n;
        while (l < r)
        {
            const int m1 = l + (r - l) / 2;
            const int m2 = k - m1;
            if (nums1[m1] < nums2[m2 - 1])
                l = m1 + 1;
            else
            {
                r = m1;
            }
        }
        const int m1 = l;
        const int m2 = k - l;
        int c1 = max(m1 <= 0 ? INT_MIN : nums1[m1 - 1], m2 <= 0 ? INT_MIN : nums2[m2 - 1]);
        if ((m + n) % 2 == 1)
            return c1;
        int c2 = min(m1 >= n ? INT_MAX : nums1[m1], m2 >= m ? INT_MAX : nums2[m2]);
        return (c1 + c2) * 0.5;
    }
};
// class Solution
// {
// public:
//     double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
//     {
//         const int n1 = nums1.size();
//         const int n2 = nums2.size();
//         // Make sure n1 <= n2
//         if (n1 > n2)
//             return findMedianSortedArrays(nums2, nums1);
//         const int k = (n1 + n2 + 1) / 2;
//         int l = 0;
//         int r = n1;
//         while (l < r)
//         {
//             const int m1 = l + (r - l) / 2;
//             const int m2 = k - m1;
//             if (nums1[m1] < nums2[m2 - 1])
//                 l = m1 + 1;
//             else
//                 r = m1;
//         }
//         const int m1 = l;
//         const int m2 = k - l;
//         const int c1 = max(m1 <= 0 ? INT_MIN : nums1[m1 - 1],
//                            m2 <= 0 ? INT_MIN : nums2[m2 - 1]);
//         if ((n1 + n2) % 2 == 1)
//             return c1;
//         const int c2 = min(m1 >= n1 ? INT_MAX : nums1[m1],
//                            m2 >= n2 ? INT_MAX : nums2[m2]);
//         return (c1 + c2) * 0.5;
//     }
// };
