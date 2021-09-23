// @algorithm @lc id=3 lang=cpp
// @title longest-substring-without-repeating-characters

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test("abcabcbb")=3
// @test("bbbbb")=1
// @test("pwwkew")=3
// @test("")=0
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int res = 0;
        vector<int> t(128, -1);
        for (int i = 0, j = 0; j < s.size(); j++)
        {
            i = max(i, t[s[j]] + 1);
            res = max(j - i + 1, res);
            t[s[j]] = j;
        }
        return res;
    }
};
// class Solution
// {
// public:
//     int lengthOfLongestSubstring(string s)
//     {
//         int count = s.size();
//         int res = 0;
//         for (int i = 0; i < count; i++)
//         {
//             int j = i;
//             vector<int> temp(128);
//             while (j < count && temp[s[j]] == 0)
//             {
//                 temp[s[j]]++;
//                 j++;
//             }
//             res = max(j - i, res);
//         }
//         return res;
//     }
// };
// class Solution
// {
// public:
//     int lengthOfLongestSubstring(string s)
//     {
//         vector<int> t(128, -1);
//         int res = 0;
//         for (int i = 0, j = 0; j < s.size(); j++)
//         {
//             i = max(i, t[s[j]] + 1);
//             res = max(res, j - i + 1);
//             t[s[j]] = j;
//         }
//         return res;
//     }
// };
//暴力
// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         int res = 0;
//         for (int i = 0; i < s.size(); i++)
//         {
//             vector<int> t(128);
//             int j = i;
//             while(j<s.size()&&t[s[j]]==0){
//                 t[s[j++]] = 1;
//             }
//             res = max(res, j - i);
//         }
//         return res;
//     }
// };
