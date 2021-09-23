// @algorithm @lc id=17 lang=cpp
// @title letter-combinations-of-a-phone-number

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test("23")=["ad","ae","af","bd","be","bf","cd","ce","cf"]
// @test("")=[]
// @test("2")=["a","b","c"]
// @test("")=[]
// @test("")=[]

class Solution
{
public:
    vector<string> letterCombinations(string digits)
    {
        if (digits == "")
            return {};
        vector<vector<char>> d{{' '}, {}, {'a', 'b', 'c'}, {'d', 'e', 'f'}, {'g', 'h', 'i'}, {'j', 'k', 'l'}, {'m', 'n', 'o'}, {'p', 'q', 'r', 's'}, {'t', 'u', 'v'}, {'w', 'x', 'y', 'z'}};
        vector<string> res;
        string t;
        dfs(t, digits, d, res, 0);
        return res;
    }

private:
    void dfs(string &t, string &digits, vector<vector<char>> &d, vector<string> &res, int s)
    {
        if (t.size() == digits.size())
        {
            res.emplace_back(t);
            return;
        }
        for (auto c : d[digits[s] - '0'])
        {
            t.push_back(c);
            dfs(t, digits, d, res, s + 1);
            t.pop_back();
        }
    }
};

// class Solution
// {
// public:
//     vector<string> letterCombinations(string digits)
//     {
//         if (digits.empty())
//             return {};
//         vector<vector<char>> d(10);
//         d[0] = {' '};
//         d[1] = {};
//         d[2] = {'a', 'b', 'c'};
//         d[3] = {'d', 'e', 'f'};
//         d[4] = {'g', 'h', 'i'};
//         d[5] = {'j', 'k', 'l'};
//         d[6] = {'m', 'n', 'o'};
//         d[7] = {'p', 'q', 'r', 's'};
//         d[8] = {'t', 'u', 'v'};
//         d[9] = {'w', 'x', 'y', 'z'};
//         string cur;
//         vector<string> ans;
//         dfs(digits, d, 0, cur, ans);
//         return ans;
//     }
// private:
//     void dfs(const string &digits,
//              const vector<vector<char>> &d,
//              int l, string &cur, vector<string> &ans)
//     {
//         if (l == digits.length())
//         {
//             ans.push_back(cur);
//             return;
//         }
//         for (const char c : d[digits[l] - '0'])
//         {
//             cur.push_back(c);
//             dfs(digits, d, l + 1, cur, ans);
//             cur.pop_back();
//         }
//     }
// };
