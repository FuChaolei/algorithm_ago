// @algorithm @lc id=1000293 lang=cpp
// @title H8086Q
//暴力：TLE
// class RecentCounter
// {
// public:
// 	RecentCounter()
// 	{
// 	}

// 	int ping(int t)
// 	{
// 		int res = 0;
// 		st1.push(t);
// 		int temp = t - 3000;
// 		while (!st1.empty() && st1.top() >= temp)
// 		{
// 			res++;
// 			st2.push(st1.top());
// 			st1.pop();
// 		}
// 		while (!st2.empty())
// 		{
// 			st1.push(st2.top());
// 			st2.pop();
// 		}
// 		return res;
// 	}

// private:
// 	stack<int> st1;
// 	stack<int> st2;
// };
class RecentCounter
{
public:
	RecentCounter()
	{
	}

	int ping(int t)
	{
		q.push(t);
		while (t - 3000 > q.front())
			q.pop();
		return q.size();
	}

private:
	queue<int> q;
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */