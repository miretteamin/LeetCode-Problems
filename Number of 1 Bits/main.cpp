#include <bits/stdc++.h>
using namespace std;

int hammingWeight(uint32_t n)
{
    int cnt = 0;
    while (n)
    {
        cnt += n & 1;
        n >>= 1;
    }
    return cnt;
}
int main()
{
	ios::sync_with_stdio(false), cin.tie(), cout.tie();

    cout << hammingWeight(00000000000000000000000000001011) << endl;

	return 0;
}