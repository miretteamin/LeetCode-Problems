#include <bits/stdc++.h>
using namespace std;

bool isSubsequence(string s, string t)
{
    int cnt = 0;
    if (s.length() == t.length() && s != t)
        return false;

    int start = -1, j = 0;
    bool flag = true;

    for (int i = 0; i < s.length(); i++)
    {
        for (j = start + 1; j < t.length(); j++)
        {
            if (s[i] == t[j])
            {
                start = j;
                cnt++;
                break;
            }
        }
    }
    if (cnt != s.length())
        flag = false;
    return flag;
}

int main()
{
	ios::sync_with_stdio(false), cin.tie(), cout.tie();

    if (isSubsequence("abc","ahbgdc"))
        cout << "true\n";
    else
        cout << "false\n";

	return 0;
}