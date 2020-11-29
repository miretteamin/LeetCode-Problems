#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	vector<int>nums = { 0,1,0,3,12 };
	int nb = count(nums.begin(), nums.end(), 0);
	nums.erase(remove(nums.begin(), nums.end(), 0), nums.end());
	for (int i = 0; i < nb; i++)
	{
		nums.push_back(0);
	}
}