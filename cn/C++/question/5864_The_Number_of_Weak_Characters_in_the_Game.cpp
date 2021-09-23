// @algorithm @lc id=2123 lang=cpp weekname=weekly-contest-257
// @title the-number-of-weak-characters-in-the-game

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test([[5,5],[6,3],[3,6]])=0
// @test([[2,2],[3,3]])=1
// @test([[1,5],[10,4],[4,3]])=1
// @test([[1,1],[2,1],[2,2],[1,2]])=1
// @test([[7,9],[10,7],[6,9],[10,4],[7,5],[7,10]])=2
// @test([[29,26],[92,1],[81,64],[41,54],[56,74],[76,39],[16,69],[78,84],[65,39],[7,2],[62,96],[16,22],[47,34],[16,22],[66,26],[93,49],[55,16],[41,21],[11,73],[17,1],[63,81],[90,37],[83,50],[7,97],[86,14],[68,67],[65,63],[35,32],[100,1],[23,4],[17,6],[74,52],[98,90],[4,15],[31,36],[69,53],[17,33],[80,56],[8,100],[94,85],[89,76],[14,76],[31,85],[89,54],[73,69],[55,7],[73,13],[31,100],[29,55],[82,6],[12,66],[17,72],[45,50],[99,73],[41,10],[89,16],[69,35],[72,34],[85,49],[12,5],[61,42],[32,28],[10,55],[61,19],[17,4],[48,59],[15,44],[7,48],[1,92],[68,12],[23,6],[5,92],[70,49],[59,3],[9,62],[50,6],[75,39],[7,79],[35,80],[94,41],[25,43],[44,16],[3,68],[87,62],[70,62],[68,49],[8,46],[16,7],[16,60],[42,48]])=84
class Solution
{
public:
    int numberOfWeakCharacters(vector<vector<int>> &properties)
    {
        sort(properties.begin(), properties.end(), [&](vector<int> a, vector<int> b)
             {
                 if (a[0] < b[0])
                     return true;
                 return false;
             });
        sort(properties.begin(), properties.end(), [&](vector<int> a, vector<int> b)
             {
                 if (a[1] < b[1] && a[0] < b[0])
                     return true;
                 return false;
             });
        // for (int i = 0; i < properties.size(); i++)
        // {
        //     cout << properties[i][0] << " " << properties[i][1] << endl;
        // }
        int res = 0;
        int n = properties.size();
        int l = 0, r = n - 1;
        while (l <= r)
        {
            if (properties[l][0] < properties[r][0] && properties[l][1] < properties[r][1])
            {
                res++;
                l++;
                r = n - 1;
            }
            else if (properties[l][0] < properties[r][0] || properties[l][1] < properties[r][1])
            {
                r--;
            }
            else
            {
                l++;
                r = n - 1;
            }
        }
        return res;
    }
};