#include <bits/stdc++.h>

using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::min;
using std::max;
int n,m;
int a[10],b[10];

int gcd(int la,int lb)
{
    int t;
    // gcd(a,b) = gcd(b,a%b)
    int k = max(la,lb);
    int h = min(la,lb);
    while((k != 0)&&(h != 0))
    {
        t = k%h;
        k = h;
        h = t;
    }
    return k+h;

}
int findLCM(int l,int q)
{
    int gd = gcd(l,q);
    return (l*q)/gd;
}
void solve()
{
    int crr_min=a[0],crr_max=b[0];
    for(int i=1;i<n;i++)
    {
        crr_min = findLCM(crr_min,a[i]);
        cerr << "crr_min = " << crr_min << endl;
    }
    int mn = b[0];
    for(int i=1;i<m;i++)
    {
        crr_max = gcd(crr_max,b[i]);
        mn = min(b[i],mn);
        cerr << "crr_max = " << crr_max << endl;
    }
    cerr << "crr_min = " << crr_min << endl;
    cerr << "crr_max = " << crr_max << endl;
    int ans = crr_max/crr_min;
    if(ans*crr_min == mn)
        ans--;
    cout << ans << endl;
}
int main()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for(int i=0;i<n;i++)
        cin >> a[i];
    for(int i=0;i<m;i++)
        cin >> b[i];
    solve();
    return 0;
}
