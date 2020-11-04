//  Problem: Find the value of a^n
//  Time Complexity: O(log(n))
#include <bits/stdc++.h>

#define lli long long int
#define ull unsigned long long int

using std::cin;
using std::cout;
using std::cerr;
using std::endl;
const int MX = 100000;
inline lli fast_power(int x, int y)
{
    if(y <= 1)
        return x;
    lli k = fast_power(x,y/2);
    k = k*k;
    if(y%2 == 1)
        k = k*x;
    return k;
}

inline void solve()
{
    int n,a;
    cin >> a >> n;
    lli k = fast_power(a,n);
    cout << k << endl;
}

int main()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    //cin >> t;
    while(t-- > 0)
        solve();
    return 0;
}
