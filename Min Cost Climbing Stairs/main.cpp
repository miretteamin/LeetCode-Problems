#include <bits/stdc++.h>
using namespace std;

int minCostClimbingStairs(vector<int>& cost)
{
    int n = cost.size();
    vector<int>dp(n);
    if (n == 1)
        return cost[0];

    dp[0] = cost[0];
    dp[1] = cost[1];
    for (int i = 2; i < n; i++)
        dp[i] = min(dp[i - 1], dp[i - 2]) + cost[i];

    return min(dp[n - 1], dp[n - 2]);
}
int main()
{
	ios::sync_with_stdio(false), cin.tie(), cout.tie();
    vector<int> cost = { 1, 100, 1, 1, 1, 100, 1, 1, 100, 1 };
    cout << minCostClimbingStairs(cost) << endl;

	return 0;
}