#include <stack>
#include <iostream>
using namespace std;

int main()
{
	string s = "()()**";
	stack<int> open, star;
	int len = s.length();

	for (int i = 0; s[i] != '\0'; ++i)
	{
		if (s[i] == '(')
			open.push(i);
		else if (s[i] == '*')
			star.push(i);
		else
		{
			if (!open.empty())
				open.pop();
			else if (!star.empty())
				star.pop();
			else
				cout << "false";
		}
	}

	//Now process leftover opening brackets
	while (!open.empty())
	{
		if (star.empty())
			cout << "false";
		else if (open.top() < star.top())
		{
			open.pop();
			star.pop();
		}
		else    //CASE: open.top() > star.top()
			cout << "false";
	}
	cout << "true";
	return 0;
}


//string s = "()";
//int max_open_left = 0, min_open_left = 0;
//for (char c : s) {
//	if (c == '(') min_open_left++; 
//	else if (min_open_left > 0) min_open_left--;
//	if (c != ')') max_open_left++;
//	else if (max_open_left == 0)
//	{
//		cout << "false";
//		return 0;
//	}
//	else max_open_left--;
//}

//cout << "TRUE";