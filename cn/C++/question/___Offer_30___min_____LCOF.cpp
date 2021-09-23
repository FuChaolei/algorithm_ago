// @algorithm @lc id=100302 lang=cpp
// @title bao-han-minhan-shu-de-zhan-lcof
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// @test("")=""
class MinStack
{
public:
	/** initialize your data structure here. */
	MinStack()
	{
	}

	void push(int x)
	{
		if (st.size() == 0)
			st.push({x, x});
		else
		{
			int temp = x > st.top().second ? st.top().second : x;
			st.push({x, temp});
		}
	}

	void pop()
	{
		st.pop();
	}

	int top()
	{
		return st.top().first;
	}

	int min()
	{
		return st.top().second;
	}

private:
	stack<pair<int, int>> st;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->min();
 */