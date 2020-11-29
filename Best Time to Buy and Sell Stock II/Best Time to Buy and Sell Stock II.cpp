#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int>prices = { 1,2,3,4,5 };

	int res = 0, min = 0, max = 0, j = 0;
    for (int i = 0; i < prices.size() - 1; i++)
    {
        int s = prices.size();

        if (s == 0) {
            return 0;
        }

        int res = 0;
        int buy = prices[0];
        int sell = INT_MIN;

        for (int i = 1; i < s; i++) {

            if (prices[i] < prices[i - 1]) {
                sell = prices[i - 1];
                res += (sell - buy);
                buy = prices[i];
            }

        }
        sell = prices[s - 1];
        res += (sell - buy);
    }
	
	cout << res;
	return 0;
}
