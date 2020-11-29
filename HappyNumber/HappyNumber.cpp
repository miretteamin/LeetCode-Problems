#include<set>
#include <iostream>
using namespace std;
int main()
{
	set<int>st;
	int temp = 0, n = 19;
	while (true)
	{
		st.insert(n);
		while (n != 0)
		{
			temp += (n % 10) * (n % 10);
			n = n / 10;
		}
		n = temp;
		cout << n;
		temp = 0;
		if (n == 1)
		{
			cout << "true";
			break;
		}
		else if (st.find(n) != st.end())
		{
			cout << "false";
			break;
		}
	}
	return 0;
}
