// @algorithm @lc id=1000292 lang=cpp
// @title qIsx9U
class MovingAverage
{
public:
	/** Initialize your data structure here. */
	MovingAverage(int size)
	{
		s = size;
	}

	double next(int val)
	{
		res += val;
		q.push(val);
		if (q.size() > s)
		{
			res -= q.front();
			q.pop();
		}
		return res / q.size();
	}

private:
	queue<int> q;
	int s;
	double res = 0;
};

/**
 * Your MovingAverage object will be instantiated and called as such:
 * MovingAverage* obj = new MovingAverage(size);
 * double param_1 = obj->next(val);
 */