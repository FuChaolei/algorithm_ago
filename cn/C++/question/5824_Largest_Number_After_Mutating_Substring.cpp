// @algorithm @lc id=2077 lang=cpp weekname=weekly-contest-251
// @title largest-number-after-mutating-substring

#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution
{
public:
    string maximumNumber(string num, vector<int> &change)
    {
        string t = num;
        int f = 0, k = 0, l = 0;
        for (int i = 0; i < num.size(); i++)
        {
            if (k == 0 && change[t[i] - '0'] == (t[i] - '0'))
            {
                continue;
            }
            else if (f == 0 && change[t[i] - '0'] >= (t[i] - '0'))
            {
                num[i] = change[t[i] - '0'] + '0';
                k = 1;
                l = 1;
            }
            else if (l == 1)
            {
                f = 1;
            }
        }
        return num;
    }
};