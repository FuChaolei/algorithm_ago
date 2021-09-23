// @algorithm @lc id=1000255 lang=cpp
// @title RQku0D

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
    bool validPalindrome(string s)
    {
        int i = 0, j = s.size() - 1;
        while (i < j)
        {
            if (s[i] == s[j])
            {
                i++;
                j--;
            }
            else if (jud(s, i + 1, j) || jud(s, i, j - 1))
                return true;
            else
            {
                return false;
            }
        }
        return true;
    }

private:
    bool jud(string s, int i, int j)
    {
        while (i < j)
        {
            if (s[i] != s[j])
                return false;
            else
            {
                i++;
                j--;
            }
        }
        return true;
    }
};

//暴力TLE
// class Solution
// {
// public:
//     bool validPalindrome(string s)
//     {
//         string ss = s;
//         reverse(ss.begin(), ss.end());
//         if(ss==s)
//             return true;
//         for (int i = 0; i < s.size(); i++)
//         {
//             if(ss[i]==s[i])
//                 continue;
//             string t = s;
//             t.erase(i, 1);
//             if (jud(t))
//                 return true;
//         }
//         return false;
//     }

// private:
//     bool jud(string s)
//     {
//         for (int i = 0, j = s.size() - 1; i < j; i++, j--)
//         {
//             if (s[i] != s[j])
//                 return false;
//         }
//         return true;
//     }
// };
