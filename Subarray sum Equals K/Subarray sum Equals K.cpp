#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main()
{
	// STL map to store number of subarrays 
	// starting from index zero having  
	// particular value of sum.
	unordered_map<int, int> prevSum;

	int cnt = 0, currsum = 0, k = 0;
	// currsum = Sum of elements so far. 

	vector<int>nums = { 10,10,10,10 };
	k = 30;


	for (int i = 0; i < nums.size(); i++)
	{
		// Add current element to sum so far. 
		currsum += nums[i];

		// If currsum is equal to desired sum, 
	   // then a new subarray is found. So 
	   // increase count of subarrays. 
		if (currsum == k)
		{
			cnt++;
		}

		// currsum exceeds given sum by currsum  
	   //  - k. Find number of subarrays having  
	   // this k and exclude those subarrays 
	   // from currsum by increasing count by  
	   // same amount. 
		if (prevSum.find(currsum - k) != prevSum.end())
		{
			cnt += (prevSum[currsum - k]);
		}

		// Add currsum value to count of  
		// different values of sum. 
		prevSum[currsum]++;
	}
	cout << cnt << endl;
	return 0;
}
