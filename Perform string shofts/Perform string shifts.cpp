#include <vector>
#include <iostream>

using namespace std;

int main()
{

	int total = 0;
	string temp, s;
	vector<vector<int>> shift = { {0,1} };

	s = "abc";
	for (int i = 0; i < shift.size(); i++)
	{

		if (shift[i][0] == 0)
		{
			total -= shift[i][1];
		}
		else
		{
			total += shift[i][1];
		}
	}
	if (total > 0)
	{
		int i = 0;
		while (total--)
		{
			i = s.length() - 1;
			temp += s[i];
			for (int i = 0; i < s.length() - 1; i++)
			{
				temp += s[i];
			}
			s = temp;
			temp = "";
		}
	}
	else if (total < 0)
	{
		total *= -1;
		int i = 0;
		char f;
		while (total--)
		{
			f = s[i];
			for (int i = 1; i < s.length(); i++)
			{
				temp += s[i];
			}
			temp += f;
			s = temp;
			temp = "";
		}
	}
	cout << s;
	return 0;
}
