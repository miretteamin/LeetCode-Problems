#include <iostream>
#include <vector>
#include <list>
using namespace std;

struct ListNode {
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(NULL) {}
};

class solution
{
public:
	ListNode* middleNode(ListNode* head)
	{
		vector<ListNode*>vec = { head };
		while (vec.back()->next != NULL)
		{
			vec.push_back(vec.back()->next);
		}
		return vec[vec.size() / 2];
	}
};


int main()
{

	return 0;
}