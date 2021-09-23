// @algorithm @lc id=100169 lang=cpp
// @title min-stack-lcci
class MinStack
{
public:
	/** initialize your data structure here. */
	MinStack()
	{
	}

	void push(int x)
	{
		if (st.empty())
			st.push({x, x});
		else
		{
			int t = st.top().second;
			st.push({x, min(t, x)});
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

	int getMin()
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
 * int param_4 = obj->getMin();
 */