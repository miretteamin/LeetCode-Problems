#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

//See the explanation on https://www.youtube.com/watch?v=03G3i8F1g-w

int main()
{
	vector<vector<int>>grid = {
		   {1,4,8,6,2,2,1,7},{4,7,3,1,4,5,5,1},{8,8,2,1,1,8,0,1},{8,9,2,9,8,0,8,9},{5,7,5,7,1,8,5,5},{7,0,9,4,5,6,5,6},{4,9,9,7,9,1,9,0}
	};

	const int m = grid.size();
	const int n = grid[0].size();

	if (grid.size() == 0 || grid[0].size() == 0) return 0;

	vector<vector<int>>minSum(m, vector<int>(n));

	minSum[0][0] = grid[0][0];
	for (int i = 1; i < m; i++) {
		minSum[i][0] = minSum[i - 1][0] + grid[i][0];
	}

	for (int i = 1; i < n; i++) {
		minSum[0][i] = minSum[0][i - 1] + grid[0][i];
	}

	for (int i = 1; i < m; i++) {
		for (int j = 1; j < n; j++) {
			minSum[i][j] = min(minSum[i - 1][j], minSum[i][j - 1]) + grid[i][j];
		}
	}

	cout << minSum[m - 1][n - 1] << endl;
	return 0;
}