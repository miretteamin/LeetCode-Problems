#include <iostream>
using namespace std;

//Watch Explanation on https://www.youtube.com/watch?v=ho9cihIwQDY

int main()
{
	long long res = 0, m, n;
	cin >> m >> n;
	if (m == n)
	{
		return m;
	}
	else if (m == 0 || n == 0)
	{
		return 0;
	}
	while (m != n)
	{
		m = m >> 1;
		n = n >> 1;
		res++;
	}

	cout << (m << res) << endl;

	return 0;
}