#include <bits/stdc++.h>
#define sp2(a,b), cout << a << " " << b << endl;
#define sp1(k), cout << k << endl;
using std::cin;
using std::cout;
using std::ios_base;
using std::endl;
void solve()
{
    int t,n,k;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        cin >> n >> k;
        cout << ((n >= 2*k && n%2 == k%2)? "YES":"NO") << endl;
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
