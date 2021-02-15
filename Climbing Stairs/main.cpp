#include <bits/stdc++.h>
using namespace std;

int climbStairs(int n)
{
	vector<int>vec(n + 3);
	vec[0] = 1;
	vec[1] = 1;
	for (int i = 2; i <= n; i++)
		vec[i] = vec[i - 1] + vec[i - 2];
	return vec[n];
}

int main()
{
	ios::sync_with_stdio(false), cin.tie(), cout.tie();
	int n;
	cin >> n;
	cout << climbStairs(n) << endl;

	return 0;
}