// @algorithm @lc id=2076 lang=cpp weekname=weekly-contest-251
// @title sum-of-digits-of-string-after-convert

#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution
{
public:
    int getLucky(string s, int k)
    {
        string t;
        int ans = 0;
        for (int j = 0; j < s.size(); j++)
        {
            int k = s[j] - 'a' + 1;
            t += to_string(k);
        }
        //cout<<t<<endl;
        for (int i = 0; i < k; i++)
        {
            for (int i = 0; i < t.size(); i++)
            {
                ans += (t[i] - '0');
            }
            if (i < k - 1)
            {
                t.clear();
                t = to_string(ans);
                ans = 0;
            }
        }
        return ans;
    }
};