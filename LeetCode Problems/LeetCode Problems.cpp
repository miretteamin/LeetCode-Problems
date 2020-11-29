#include<map>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs)
{
	vector< vector<string> > result;
	map<string, int> m;
	for (int i = 0; i < strs.size(); i++)
	{
		string word = strs[i];
		sort(word.begin(), word.end());
		if (m.find(word) == m.end())
		{
			vector<string> v;
			v.push_back(strs[i]);
			result.push_back(v);
			m[word] = result.size() - 1;

		}
		else {
			result[m[word]].push_back(strs[i]);
		}
	}
	for (int i = 0; i < result.size(); i++)
	{
		sort(result[i].begin(), result[i].end());
	}
	return result;
}
int main()
{
	vector<string>strs = { "eat", "tea", "tan", "ate", "nat", "bat" };
	groupAnagrams(strs);
	return 0;
}
