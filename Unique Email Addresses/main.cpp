#include <bits/stdc++.h>
using namespace std;

int numUniqueEmails(vector<string>& emails)
{
    set<string>mp;
    int cnt = 0;
    for (int i = 0; i < emails.size(); i++)
    {
        auto pos = emails[i].find('@');
        string str1 = emails[i].substr(0, pos), str2 = emails[i].substr(pos, emails[i].length() - 1);
        for (int i = 0; i < str1.length(); i++)
        {
            if (str1[i] == '.')
                str1.erase(i, 1);
            if (str1[i] == '+')
                str1.erase(i, str1.length() - 1);
        }
        cout << str1 + str2 << endl;
        mp.insert(str1 + str2);
    }


    return mp.size();
}

int main()
{
	ios::sync_with_stdio(false), cin.tie(), cout.tie();
    vector<string> emails = { "test.email+alex@leetcode.com","test.e.mail+bob.cathy@leetcode.com","testemail+david@lee.tcode.com" };
    cout << numUniqueEmails(emails) << endl;
	return 0;
}