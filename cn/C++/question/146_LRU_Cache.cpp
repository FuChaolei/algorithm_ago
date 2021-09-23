// @algorithm @lc id=146 lang=cpp
// @title lru-cache
class LRUCache
{
private:
	int c;
	list<pair<int, int>> ls;
	unordered_map<int, list<pair<int, int>>::iterator> mp;

public:
	LRUCache(int capacity)
	{
		c = capacity;
	}

	int get(int key)
	{
		auto it = mp.find(key);
		if (it != mp.end())
		{
			ls.splice(ls.begin(), ls, mp[key]);
			return mp[key]->second;
		}
		return -1;
	}

	void put(int key, int value)
	{
		auto it = mp.find(key);
		if (it != mp.end())
		{
			it->second->second = value;
			ls.splice(ls.begin(), ls, mp[key]);
			return;
		}
		if (ls.size() == c)
		{
			auto it = mp.find(ls.back().first);
			mp.erase(it);
			ls.pop_back();
		}
		ls.emplace_front(key, value);
		mp[key] = ls.begin();
		return;
	}
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
