// @algorithm @lc id=1000226 lang=cpp
// @title WqXACV
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
class Solution
{
public:
    int halfQuestions(vector<int> &q)
    {
        int N = q.size() / 2;
        unordered_map<int, int> mp;
        for (auto it : q)
        {
            mp[it]++;
        }
        multiset<int, greater<int>> st;
        for (auto [k, v] : mp)
            st.insert(v);
        int res = 0;
        for (auto it : st)
        {
            if (N > 0)
            {
                N -= it;
                res++;
            }
            else
            {
                return res;
            }
        }
        return res;
    }
};