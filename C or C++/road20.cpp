#include <bits/stdc++.h>
using std::cin;
using std::cout;
using std::ios;
using std::endl;
using std::min;
 
void solve()
{
    long long int t,x,y,a,b,q,w;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        cin >> x >> y >> a >> b;
        if(2*a >= b)
        {
            q = min(x,y);
            x -= q;
            y -= q;
            cout << q*b+(x+y)*a << endl;
        }
        if(2*a < b)
        {
            cout << (x+y)*a << endl;
        }
    }
 
}
int main()
{
    ios::sync_with_stdio(0);
    solve();
    return 0;
}
