#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

TreeNode* trimBST(TreeNode* root, int low, int high)
{
	if (root == NULL)
		return root;

	root->left = trimBST(root->left, low, high);
	root->right = trimBST(root->right, low, high);

	if (root->val < low || root->val > high)
	{
		if (root->left == NULL)
			return root->right;

		if (root->right == NULL)
			return root->left;
	}

	return root;
}

void printPreorder(struct TreeNode* node)
{
	if (node == NULL)
	{
		cout << "null ";
		return;
	}
	cout << node->val << " ";
	printPreorder(node->left);
	printPreorder(node->right);
}

int main()
{
	ios::sync_with_stdio(false), cin.tie(), cout.tie();

	TreeNode* root = new TreeNode(1);
	root->left = new TreeNode(0);
	root->right = new TreeNode(2);

	root = trimBST(root, 1, 2);

	printPreorder(root);

	return 0;
}