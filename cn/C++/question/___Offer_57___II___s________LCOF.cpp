// @algorithm @lc id=100324 lang=cpp
// @title he-wei-sde-lian-xu-zheng-shu-xu-lie-lcof

#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
//暴力
class Solution
// @test(9)=[[2,3,4],[4,5]]
{
public:
    vector<vector<int>> findContinuousSequence(int target)
    {
        vector<vector<int>> res;
        for (int i = 1; i < target; i++)
        {
            int ans = i;
            vector<int> temp{i};
            for (int j = i + 1; j <= target; j++)
            {
                ans += j;
                if (ans < target)
                    temp.emplace_back(j);
                else if (ans == target)
                {
                    temp.emplace_back(j);
                    res.push_back(temp);
                    break;
                }
                else
                {
                    break;
                }
            }
        }
        return res;
    }
};
// class Solution {
// public:
//     vector<vector<int>> findContinuousSequence(int target) {
//         vector<vector
//     }
// };