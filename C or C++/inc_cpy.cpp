#include <bits/stdc++.h>
using std::cin;
using std::cout;
using std::cerr;
using std::floor;
using std::endl;

int ct(long long n)
{
    if(n <= 1)
        return 0;
    if(n%2 == 0)
    {
        return 1+ct(n/2);
    }
    else
    {
        n = (n-1)/2;
        return 1+ct(n)+ct(n+1);
    }
    return 0;
}

void solve()
{
    long long n;
    cin >> n;
    int k = ct(n);
    cout << k << endl;
}

int main()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
        solve();
    return 0;
}
