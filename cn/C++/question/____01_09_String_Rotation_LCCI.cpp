// @algorithm @lc id=100162 lang=cpp
// @title string-rotation-lcci

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test("")=""
// @test("waterbottle","erbottlewat")=true
// @test("rxOpSEXvfIuoRJfjwgwuomevMMBOfeSMvYSPBaovrZBSgmCrSLDirNnILhARNShOYIFBHIRiFKHtfxWHjawaLRAEYPIZokUKgiqyZpvcOHdfPpRqHADKAXzEfzhxdXXb","")=false
// @test("","")=true
class Solution
{
public:
    bool isFlipedString(string s1, string s2)
    {
        if (s2 == s1)
            return true;
        if (s2 == "")
            return false;
        s1 += s1;
        return s1.find(s2) != -1;
    }
};