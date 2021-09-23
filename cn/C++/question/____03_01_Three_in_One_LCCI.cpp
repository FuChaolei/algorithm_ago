// @algorithm @lc id=100172 lang=cpp
// @title three-in-one-lcci
class TripleInOne
{
public:
	TripleInOne(int stackSize) : stackSize(stackSize)
	{
		trs = vector<int>(stackSize * 3);
	}

	void push(int stackNum, int value)
	{
		if (up[stackNum] == stackSize)
			return;
		trs[stackSize * stackNum + up[stackNum]++] = value;
	}

	int pop(int stackNum)
	{
		if (up[stackNum] == 0)
			return -1;
		return trs[stackSize * stackNum + (--up[stackNum])];
	}

	int peek(int stackNum)
	{
		if (up[stackNum] == 0)
			return -1;
		return trs[stackSize * stackNum + up[stackNum] - 1];
	}

	bool isEmpty(int stackNum)
	{
		if (up[stackNum] == 0)
			return true;
		return false;
	}

private:
	vector<int> trs;
	int stackSize;
	vector<int> up{0, 0, 0};
};

/**
 * Your TripleInOne object will be instantiated and called as such:
 * TripleInOne* obj = new TripleInOne(stackSize);
 * obj->push(stackNum,value);
 * int param_2 = obj->pop(stackNum);
 * int param_3 = obj->peek(stackNum);
 * bool param_4 = obj->isEmpty(stackNum);
 */