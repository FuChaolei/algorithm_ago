// @algorithm @lc id=1000323 lang=cpp
// @title jBjn9C
//暴力
// class KthLargest
// {
// public:
// 	int km = 0;
// 	multiset<int, grater<int>> st;
// 	KthLargest(int k, vector<int> &nums)
// 	{
// 		for (auto t : nums)
// 		{
// 			st.insert(t);
// 		}
// 		km = k;
// 	}
// 	int add(int val)
// 	{
// 		st.insert(val);
// 		multiset<int>::iterator it = st.begin();
// 		advance(it, km - 1);
// 		return *it;
// 	}
// };

class KthLargest
{
public:	
	priority_queue<int, vector<int>, greater<int>> q;
	int K;
	KthLargest(int k, vector<int> &nums)
	{
		K = k;
		for (auto it : nums)
		{
			q.push(it);
			if (q.size() > k)
				q.pop();
		}
	}

	int add(int val)
	{
		q.push(val);
		if (q.size() > K)
			q.pop();
		return q.top();
	}
};
/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */