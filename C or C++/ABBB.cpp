// problem: https://codeforces.com/problemset/problem/1428/C
#include <bits/stdc++.h>
#define lli long long int
#define ull unsigned long long int
using std::cin;
using std::cout;
using std::endl;
using std::stack;
using std::string;
const int MX = 100000;
int n;
string s;
int cc()
{
    stack<char> st;
    for(int i=0;i<n;i++)
    {
        if(s[i] == 'A')
            st.push('A');
        else if(s[i] == 'B')
        {
            if(st.empty())
                st.push('B');
            else
                st.pop();
        }
    }
    return (int)st.size();
}
inline void solve()
{
    cin >> s;
    n = (int)s.size();
    cout << cc() << "\n";
}
int main()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t-- > 0)
        solve();
    return 0;
}
