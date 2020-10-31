#include <bits/stdc++.h>
#define sp2(a,b), cout << a << " " << b << endl;
#define sp1(k), cout << k << endl;
using std::cin;
using std::cout;
using std::vector;
using std::ios_base;
using std::sort;
using std::unordered_map;
using std::endl;
void solve()
{
    int n,t;
    cin >> t;
    for(int y=0;y<t;y++)
    {
        unordered_map<int, int> mp;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            mp[a[i]] = i;
        }
        sort(a,a+n);
        for(int i=0;i<n;i++)
            
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
