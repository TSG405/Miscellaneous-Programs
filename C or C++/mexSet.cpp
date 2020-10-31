#include <bits/stdc++.h>
#define sp2(a,b), cout << a << " " << b << endl;
#define sp1(k), cout << k << endl;
using std::cin;
using std::cout;
using std::vector;
using std::ios_base;
using std::max;
using std::map;
using std::endl;
int n,t;
int a[200];
void solve()
{
    cin >> t;
    for(int g=0;g<t;g++)
    {
        cin >> n;
        map<int,int> m;
        int mx=0,ans=0;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            m[a[i]]++;
            mx = max(mx,a[i]);
        }
        int ct = 0;
        vector<int> k;
        if(n == 1)
            ans = (a[0] == 0)? 1:0;
        if(n == 2)
            ans = ((a[0] == 0)? 1:0) + ((a[1] == 0)? 1:0);
        if(n > 2)
        {
            for(int i=0;i<=mx && k.size() < 2;i++)
            {
                if(m.find(i) == m.end())
                    k.push_back(i);
            }
            ans = k[0] + k[1];
        }
        cout << ans << endl;
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
