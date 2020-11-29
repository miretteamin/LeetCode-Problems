#include<unordered_map>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	vector<int>nums{ 0,1,0,0,1,0,1,1,1 };
	unordered_map<int, int>mp;
	mp[0] = -1;
	int mx = 0, x = 0;
	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i] == 0) x--;
		else x++;

		if (mp.find(x) != mp.end())
		{
			mx = max(mx, i - mp[x]); 
			cout << x <<"   ";
		}
		else mp[x] = i;
	}
	cout << mx << endl;
	return 0;
}