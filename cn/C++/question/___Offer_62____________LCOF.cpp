// @algorithm @lc id=100343 lang=cpp
// @title yuan-quan-zhong-zui-hou-sheng-xia-de-shu-zi-lcof

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test(5, 2)=2
// @test(5, 3)=3
//数组
// class Solution {
// public:
//     int lastRemaining(int n, int m) {
//         vector<int> res(n+1);
//         int i = 0,k=0,cnt=0;
//         while(cnt!=n){
//             i++;
//             if(i>n)
//                 i = 1;
//             if(res[i]==0){
//                 k++;
//                 if(k==m){
//                     res[i] = 1;
//                     cnt++;
//                     k = 0;
//                 }
//             }
//         }
//         return i-1;
//     }
// };
//递归
class Solution
{
public:
    int lastRemaining(int n, int m)
    {
        if (n == 1)
            return 0;
        return (lastRemaining(n - 1, m) + m) % n;
    }
};