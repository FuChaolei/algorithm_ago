// @algorithm @lc id=2100 lang=cpp weekname=weekly-contest-254
// @title minimum-non-zero-product-of-the-array-elements

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test(1)=1
// @test(2)=6
// @test(3)=1512
// @test(30)=945196305
// @test(32)=505517599
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution
{
public:
    int minNonZeroProduct(int p)
    {
        if (p == 1)
            return 1;
        long long t = 1ll << p;
        long long m = qpow(t - 2, (t - 2) / 2);
        t = t % 1000000007;
        int ans = m * (t - 1) % 1000000007;
        return ans;
    }

private:
    long long qpow(long long a, long long n)
    {
        long long res = 1;
        while (n)
        {
            a %= 1000000007;
            if (n % 2 == 1)
            {
                res *= a;
                res %= 1000000007;
            }
            a *= a;
            n /= 2;
        }
        return res;
    }
};
// class Solution
// {
// public:
//     typedef long long LL;
//     static const int MOD = 1e9 + 7;
//     LL quick_pow(LL a, LL x)
//     {
//         LL ret = 1;
//         while (x)
//         {
//             if (x & 1)
//                 ret = ret * a % MOD;
//             a = a * a % MOD;
//             x >>= 1;
//         }
//         return ret;
//     }
//     int minNonZeroProduct(int p)
//     {
//         LL ret = ((1LL << p) - 1) % MOD;
//         LL fuck = quick_pow(ret - 1, (1LL << (p - 1)) - 1);
//         ret = ret * fuck % MOD;
//         return ret;
//     }
// };
