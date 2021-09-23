// @algorithm @lc id=100301 lang=cpp
// @title zui-xiao-de-kge-shu-lcof

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
class Solution
{
private:
    void quickSort(vector<int> &arr, int l, int r)
    {
    }

public:
    vector<int> getLeastNumbers(vector<int> &arr, int k)
    {
        vector<int> res;
        srand(time(NULL));
        int n = arr.size() - 1;
        quickSort(arr, 0, n);
        return res(arr.begin(), arr.begin() + k);
    }
};
// class Solution
// {
// public:
//     vector<int> getLeastNumbers(vector<int> &arr, int k)
//     {
//         sort(arr.begin(), arr.end());
//         vector<int> res(arr.begin(), arr.begin() + k);
//         return res;
//     }
// };
