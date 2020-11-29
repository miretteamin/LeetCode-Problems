#include<vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

//Kadane's Algorithm

int main()
{
	vector<int>nums = { 2,-3,1,3,-3,2,2,1 };
	int max_so_far = nums[0];
	int curr_max = nums[0];

	for (int i = 1; i < nums.size(); i++)
	{
		curr_max = max(nums[i], curr_max + nums[i]);
		max_so_far = max(max_so_far, curr_max);
	}
	cout << max_so_far;
	return 0;
}


//#include<vector>
//#include<algorithm>
//class Solution {
//public:
//	int maxSubArray(vector<int>& nums)
//	{
//		int t = 0, mid = 0, n, x;
//		vector<int>st;
//		t = *max_element(nums.begin(), nums.end());
//		n = count(nums.begin(), nums.end(), t);
//		st.push_back(t);
//		if (n == nums.size())
//		{
//			st.push_back(accumulate(nums.begin(), nums.end(), 0));
//		}
//		else
//		{
//
//			while (nums.size() > 3)
//			{
//				t = *max_element(nums.begin(), nums.end());
//				x = distance(nums.begin(), max_element(nums.begin(), nums.end()));
//				//to the right
//				for (int i = x; i < nums.size() - 1; i++)
//				{
//					t += nums[i + 1];
//					st.push_back(t);
//				}
//				t = *max_element(nums.begin(), nums.end());
//				//to the left
//				for (int i = x; i > 0; i--)
//				{
//					t += nums[i - 1];
//					st.push_back(t);
//				}
//				t = *max_element(nums.begin(), nums.end());
//				//in the middle for the right
//				mid = x;
//				for (int i = x; i < nums.size() - 1; i++)
//				{
//					if (mid > 0)
//					{
//						t += nums[mid - 1] + nums[i + 1];
//						st.push_back(t);
//						mid--;
//					}
//					else
//					{
//						t += nums[i + 1];
//						st.push_back(t);
//					}
//
//				}
//				//in the middle for the left
//				mid = x;
//				t = *max_element(nums.begin(), nums.end());
//				for (int i = x; i > 0; i--)
//				{
//					if (mid < nums.size() - 1)
//					{
//						t += nums[i - 1] + nums[mid + 1];
//						st.push_back(t);
//						mid++;
//					}
//					else
//					{
//						t += nums[i - 1];
//						st.push_back(t);
//					}
//
//				}
//				nums.erase(nums.begin() + x);
//			}
//		}
//		return *max_element(st.begin(), st.end());
//	}
//};