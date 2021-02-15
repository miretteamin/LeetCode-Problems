#include <bits/stdc++.h>
using namespace std;

bool divisorGame(int N)
{
	if (N % 2 == 0)
		return true;
	else
		return false;
}

int main()
{
	ios::sync_with_stdio(false), cin.tie(), cout.tie();

	if (divisorGame(2))
		cout << "true\n";
	else
		cout << "false\n";

	return 0;
}