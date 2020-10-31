#include <bits/stdc++.h>

#define lli long long int
#define ull unsigned long long
#define MX 10000

using std::cin;
using std::cout;
using std::ios_base;
using std::endl;

int a[5*MX];
int t,n;
void solve()
{
    cin >> n;
    for(int i=0;i<n;i++)
        cin >> a[i];
    bool b = false;
    for(int i=1;!b && i<n;i++)
    {
        if(a[i-1] <= a[i])
            b = true;
    }
    cout << ((b == true)? "YES":"NO") << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    for(int i=0;i<t;i++)
        solve();
    return 0;
}
