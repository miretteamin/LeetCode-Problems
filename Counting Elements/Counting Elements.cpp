#include<set>
#include<vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int cnt = 0;
    multiset<int>st;
    vector<int>vec = {1,2,3};
    set<int>::iterator it = st.begin();
   
    for (int i = 0; i < vec.size(); i++)
    {
        st.insert(vec[i]);
    }
    for (auto it = st.begin(); it != st.end(); it++)
    {
        auto temp = st.find(*it + 1);
        if (temp != st.end() )
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}
