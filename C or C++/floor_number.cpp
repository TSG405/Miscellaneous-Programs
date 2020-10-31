#include <bits/stdc++.h>
using std::cin;
using std::cout;
using std::endl;
using std::max;
int t,n,x;
void solve()
{
    cin >> n >> x;
    /*
    int Nmx = max(0,n-1)/x;
    if(2+x*Nmx < n)
        Nmx++;
    */
    if(n <= 2)
        cout << 1 << endl;
    else
    {
        int i = 1;
        while(2+x*i < n)
            i++;
        cout << i+1 << endl;
    }
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
