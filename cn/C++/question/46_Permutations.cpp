// @algorithm @lc id=46 lang=cpp
// @title permutations

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test([1,2,3])=[[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
// @test([0,1])=[[0,1],[1,0]]
// @test([1])=[[1]]
class Solution
{
public:
    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> res;
        vector<int> path;
        int n = nums.size();
        vector<int> used(n);
        function<void(int)> dfs = [&](int d)
        {
            if (d == n)
            {
                res.emplace_back(path);
                return;
            }
            for (int i = 0; i < n; i++)
            {
                if (used[i] == 1)
                    continue;
                used[i] = 1;
                path.emplace_back(nums[i]);
                dfs(d + 1);
                path.pop_back();
                used[i] = 0;
            }
        };
        dfs(0);
        return res;
    }
};
// class Solution
// {
// public:
//     vector<vector<int>> permute(vector<int> &nums)
//     {
//         vector<vector<int>> res;
//         int n = nums.size();
//         vector<int> used(n);
//         vector<int> path;
//         function<void(int)> dfs = [&](int d)
//         {
//             if (d == n)
//             {
//                 res.emplace_back(path);
//                 return;
//             }
//             for (int i = 0; i < n; i++)
//             {
//                 if (used[i] == 1)
//                     continue;
//                 used[i] = 1;
//                 path.emplace_back(nums[i]);
//                 dfs(d + 1);
//                 path.pop_back();
//                 used[i] = 0;
//             }
//         };
//         dfs(0);
//         return res;
//     }
// };
//系统函数
// class Solution {
// public:
//     vector<vector<int>> permute(vector<int>& nums) {
//         sort(nums.begin(), nums.end());
//         vector<vector<int>> res;
//         do
//         {
//             res.emplace_back(nums);
//         } while (next_permutation(nums.begin(), nums.end()));
//         return res;
//     }
// };
