#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices)
{
	int mx = 0, mn = 100000;
	for (int i = 0; i < prices.size(); i++)
	{
		mn = min(mn, prices[i]);

		mx = max(mx, prices[i] - mn);
	}
	return mx;
}

int main()
{
	ios::sync_with_stdio(false), cin.tie(), cout.tie();
	vector<int> prices = { 7,1,5,3,6,4 };
	cout << maxProfit(prices) << endl;
	return 0;
}