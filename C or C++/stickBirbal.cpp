#include <bits/stdc++.h>
#define sp2(a,b), cout << a << " " << b << endl;
#define sp1(k), cout << k << endl;
using std::cin;
using std::cout;
using std::stack;
using std::ios_base;
using std::unordered_map;
using std::endl;
#define MX 100000
int a[MX];
void solve()
{
    int T,N;
    cin >> T;
    
    for(int i=0;i<T;i++)
    {
        unordered_map<int, int> mp;
        cin >> N;
        for(int j=0;j<N;j++)
        {
            cin >> a[j];
            mp[a[j]]++;
        }
        /*
        stack<int> st;
        for(auto j = mp.begin();j!=mp.end();j++)
            st.push(j->first);
        int count = 0,u = st.top();
        st.pop();
        while(!st.empty())
        {
                
        }
        */
        cout << mp.size() << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
