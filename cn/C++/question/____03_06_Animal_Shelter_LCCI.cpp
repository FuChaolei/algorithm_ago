// @algorithm @lc id=100228 lang=cpp
// @title animal-shelter-lcci
//["AnimalShelf", "enqueue", "enqueue", "dequeueCat", "dequeueDog", "dequeueAny"]
//[[], [[0, 0]], [[1, 0]], [], [], []]
class AnimalShelf
{
public:
	AnimalShelf()
	{
	}

	void enqueue(vector<int> animal)
	{
		if (animal[1] == 0)
			qc.push({animal[0], animal[1]});
		else
		{
			qd.push({animal[0], animal[1]});
		}
	}

	vector<int> dequeueAny()
	{
		if (qc.empty() && qd.empty())
			return {-1, -1};
		if (qd.empty())
		{
			int t = qc.front().first;
			int t1 = qc.front().second;
			qc.pop();
			return {t, t1};
		}
		if (qc.empty())
		{
			int t = qd.front().first;
			int t1 = qd.front().second;
			qd.pop();
			return {t, t1};
		}
		int a = qc.front().first;
		int b = qd.front().first;
		if (a < b)
		{
			int t = qc.front().second;
			qc.pop();
			return {a, t};
		}
		else
		{
			int t = qd.front().second;
			qd.pop();
			return {b, t};
		}
		return {-1, -1};
	}

	vector<int> dequeueDog()
	{
		if (qd.empty())
			return {-1, -1};
		int a = qd.front().first;
		qd.pop();
		return {a, 1};
	}

	vector<int> dequeueCat()
	{
		if (qc.empty())
			return {-1, -1};
		int a = qc.front().first;
		qc.pop();
		return {a, 0};
	}

private:
	queue<pair<int, int>> qc;
	queue<pair<int, int>> qd;
};

/**
 * Your AnimalShelf object will be instantiated and called as such:
 * AnimalShelf* obj = new AnimalShelf();
 * obj->enqueue(animal);
 * vector<int> param_2 = obj->dequeueAny();
 * vector<int> param_3 = obj->dequeueDog();
 * vector<int> param_4 = obj->dequeueCat();
 */