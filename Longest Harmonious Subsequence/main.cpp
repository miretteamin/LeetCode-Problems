#include <bits/stdc++.h>
using namespace std;

int findLHS(vector<int>& nums)
{
	int left = 0, mx = 0;

	sort(nums.begin(), nums.end());

	for (int i = 0; i < nums.size(); i++)
	{
		while (left < i && nums[i] - nums[left] > 1)
			left++;

		if (nums[i] - nums[left] == 1)
			mx = max(i - left + 1, mx);
	}
	return mx;
}
int main()
{
	ios::sync_with_stdio(false), cin.tie(), cout.tie();

	vector<int> nums = { 1,3,2,2,5,2,3,7 };
	cout << findLHS(nums) << endl;

	return 0;
}