// @algorithm @lc id=2113 lang=cpp weekname=weekly-contest-256
// @title find-the-kth-largest-integer-in-the-array

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test(["3","6","7","10"],4)="3"
// @test(["2","21","12","1"],3)="2"
// @test(["0","0"],2)="0"
class Solution {
public:
    static bool comp(string a,string b){
        if(a.size()>b.size()){
            return true;
        }
        else if(a.size()<b.size()){
            return false;
        }
        else{
            for(int i=0;i<a.size();i++){
                if(a[i]>b[i])
                    return true;
                else if(a[i]<b[i])
                    return false;
            }
        }
        return false;
    }
    string kthLargestNumber(vector<string>& nums, int k) {
        sort(nums.begin(),nums.end(),comp);
        return nums[nums.size()-k-1];
    }
};
