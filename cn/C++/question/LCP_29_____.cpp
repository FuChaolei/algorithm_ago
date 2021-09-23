// @algorithm @lc id=1000216 lang=cpp
// @title SNJvJP

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test(3,0,2)=3
// @test(4,1,2)=5
class Solution
{
public:
    int orchestraLayout(int num, int xPos, int yPos)
    {
        long long key = min(min(xPos, yPos), min(num - 1 - xPos, num - 1 - yPos));
        long long ret = 0;
        long long size = num - key - key;
        if (key > 0)
        {
            ret += 2 * (num + size) * key;
        }
        xPos -= key;
        yPos -= key;
        if (xPos == 0)
            ret += yPos;
        else if (yPos == size - 1)
            ret += size + xPos - 1;
        else if (xPos == size - 1)
            ret += size * 2 - 2 + size - yPos - 1;
        else
        {
            ret += size * 3 - 3 + size - xPos - 1;
        }
        return ret % 9 + 1;
    }
};
// class Solution
// {
// public:
//     int orchestraLayout(int num, int xPos, int yPos)
// 	{
// 		long long key=min(min(xPos,num-1-xPos),min(yPos,num-1-yPos));
// 		long long ret=0;
// 		long long size=num-key-key;
// 		if (key>0){
// 			ret+=(num-1)*key*4;
// 			ret-=4*(key-1)*key;
// 		}
// 		//把key圈提出来当成一个新的方阵，方便计算 往左上方平移key个位置
// 		xPos -= key;
// 		yPos -= key;

// 		if (xPos==0)   //在上面一条边上，那就看看往右得y走了几个位置 +上去
// 			ret+=yPos;
// 		else if (yPos==size-1) //在右边一条边上，加上一条边的个数（size-1） 再看看往下走了几个位置 +上去
// 			ret+=size-1+xPos;
// 		else if (xPos==size-1)  //在下面一条边上，加上两条边的个数   2 *（size-1） 再看看往右走了几个位置 +上去
// 			ret+=(size-1)*2+(size-1-yPos);
// 		else  //在左面一条边上，加上三条边的个数   3 *（size-1） 再看看往上走了几个位置 +上去
// 			ret+=(size-1)*3+(size-1-xPos);
// 		return ret%9+1;   //为什么+1是因为我们计算ret 的时候是从0开始的
// 	}
// };
//超时
// class Solution
// {
// public:
//     int orchestraLayout(int num, int x, int y)
//     {
//         int res = 0;
//         vector<vector<int>> v(num, vector<int>(num));
//         int c = 0, r = 0, d = 0;
//         for (int i = 0; i < num * num; i++)
//         {
//             v[c][r] = 1;
//             {
//                 res++;
//                 res %= 9;
//             }
//             if (c == x && r == y)
//                 return res % 9;
//             int cc = c + dir[d][0];
//             int rr = r + dir[d][1];
//             if (cc < 0 || cc >= num || rr < 0 || rr >= num || v[cc][rr] == 1)
//             {
//                 d = (d + 1) % 4;
//                 cc = c + dir[d][0];
//                 rr = r + dir[d][1];
//             }
//             c = cc;
//             r = rr;
//         }
//         return 0;
//     }
// private:
//     vector<vector<int>> dir{{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
// };