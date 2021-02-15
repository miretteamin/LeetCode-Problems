#include <bits/stdc++.h>
using namespace std;

struct ListNode {
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(NULL) {}
};

bool hasCycle(ListNode* head)
{
    if (head == NULL) 
        return false;

    ListNode* slow = head;
    ListNode* fast = head;

    while (slow->next != NULL && fast->next != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) { return true; }
    }

    return false;
}

int main()
{
	ios::sync_with_stdio(false), cin.tie(), cout.tie();

    ListNode* head = new ListNode(3);
    head->next = new ListNode(2);
    head->next->next = new ListNode(0);
    head->next->next->next = new ListNode(-4);

    head->next->next->next = head->next;  //pos=1

    if (hasCycle(head))
        cout << "true\n";
    else
        cout << "false\n";

	return 0;
}