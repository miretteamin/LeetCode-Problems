#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	string S, T;
	cin >> S;
	int s = S.length();
	for (int i = 0; i < S.length(); i++)
	{
		if (S[i] == '#'&&i != 0)
		{
			S.erase(i,1);
			cout << i <<" "<< S.length() << " " << S <<" ";
			S.erase(i-1, 1);
			cout << i<<" " << S.length() <<" "<<S<<" ";
			i -= 2;
		} 
		else if (S[i] == '#' && i == 0)
		{
			S.erase(i, 1);
			i--;
		}
		cout << S<<endl;
	}
	/*for (int i = 0; i < T.length(); i++)
	{
		if (T[i] == '#')
		{
			T.erase(i);
			T.erase(i - 1);
		}
	}*/
	cout << S;
	return 0;
}
//"j##xfix"
//"j###xfix"
