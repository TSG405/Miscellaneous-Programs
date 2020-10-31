#include <bits/stdc++.h>

#define lli long long int
#define ull unsigned long long
#define MX 100000

using std::cin;
using std::cout;
using std::endl;

int t,n,m;
int a,b,c,d;
void solve()
{
    cin >> n >> m;
    bool sel = false;
    for(int i = 0;i<n;i++)
    {
        cin >> a >> b >> c >> d;
        if(b == c)
            sel = true;
    }
    if(m%2 == 1)
        sel = false;
    cout << ((sel)? "YES":"NO") << endl;
}

int main()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    for(int i=0;i<t;i++)
        solve();
    return 0;
}
