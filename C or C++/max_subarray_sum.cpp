// Problem: largest sum contiguous subarray
// -> finds sum of the subarray with the largest sum
#include <bits/stdc++.h>
using std::cin;
using std::cout;
using std::endl;
using std::pair;
using std::make_pair;
const int MX = 100000;
pair<int,int> maxCs(int a[], int n)
{
    int mr = INT_MIN, me = 0, h = 0;
    for(int i=0;i<n;i++)
    {
        me += a[i];
        if(mr < me)
        {
            mr = me;
            h = i;
        }
        if(me < 0)
            me = 0;
    }
    return make_pair(mr,h);
}
void solve()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    pair<int,int> p = maxCs(a,n);
    cout << p.first << " " << endl;
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
