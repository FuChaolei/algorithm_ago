// @algorithm @lc id=5 lang=cpp
// @title longest-palindromic-substring

#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test("babad")="bab"
// @test("cbbd")="bb"
// @test("a")="a"
// @test("ac")="a"
class Solution
{
public:
    string longestPalindrome(string s)
    {
        int n = s.size();
        auto getlenth = [&](int l, int r)
        {
            while (l >= 0 && r < n && s[l] == s[r])
            {
                l--;
                r++;
            }
            return r - l - 1;
        };
        int cur = 0;
        int start = 0;
        int len = 0;
        for (int i = 0; i < n; i++)
        {
            cur = max(getlenth(i, i), getlenth(i, i + 1));
            if (cur > len)
            {
                len = cur;
                start = i - (len - 1) / 2;
            }
        }
        return s.substr(start, len);
    }
};
// Author: Huahua, 16 ms, 8.7 MB
// class Solution
// {
// public:
//     string longestPalindrome(string s)
//     {
//         const int n = s.length();
//         auto getLen = [&](int l, int r)
//         {
//             while (l >= 0 && r < n && s[l] == s[r])
//             {
//                 --l;
//                 ++r;
//             }
//             return r - l - 1;
//         };
//         int len = 0;
//         int start = 0;
//         for (int i = 0; i < n; ++i)
//         {
//             int cur = max(getLen(i, i),
//                           getLen(i, i + 1));
//             if (cur > len)
//             {
//                 len = cur;
//                 start = i - (len - 1) / 2;
//             }
//         }
//         return s.substr(start, len);
//     }
// };
