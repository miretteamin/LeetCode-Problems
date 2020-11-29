#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;


//https://leetcode.com/problems/longest-common-subsequence/discuss/348884/C%2B%2B-O(nm)
int main()
{
	string text1 = "oxcpqrsvwf", text2 = "shmtulqrypy";
	vector<vector<short>> m(text1.length() + 1, vector<short>(text2.length() + 1));

	for (int i = 1; i <= text1.length(); i++)
	{
		for (int j = 1; j <= text2.length(); j++)
		{
			if (text1[i - 1] == text2[j - 1])
			{
				m[i][j] = m[i - 1][j - 1] + 1;
			}
			else
			{
				m[i][j] = max(m[i - 1][j], m[i][j - 1]);
			}
		}
	}
	cout << m[text1.length()][text2.size()] << endl;


	ios_base::sync_with_stdio(false);
	cin.tie();
	cout.tie();

	return 0;
}