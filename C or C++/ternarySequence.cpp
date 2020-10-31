#include <iostream>
#include <cmath>
using namespace std;
void solve()
{
    int c,b[3],a[3],n,t;
    cin >> t;
    int te[t];
    for(int i=0;i<t;i++)
    {
        c = 0;
        cin >> a[0] >> a[1] >> a[2];
        cin >> b[0] >> b[1] >> b[2];
        n = a[0] + a[1] + a[2];
        if(n > 1)
        {
            int k = min(a[2],b[1]);
            a[2] -= k;
            b[2] -= k;
            c += 2*k;
            //cout << "c = " << c << " k = " << k << endl;
            if(b[2] > 0 && a[0] > 0)
            {
                k = min(b[2],a[2]);
                b[2] -= k;
                a[2] -= k;
                c -= 2*b[2];
            }
        }
        else
        {
            if(a[2] > 0 && b[1] > 0)
                c = 2;
            else if(a[1] > 0 && a[2] > 0)
                c = -2;
            else
                c = 0;
        }
        te[i] = c;
    }
    for(int i=0;i<t;i++)
        cout << te[i] << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    solve();
    return 0;
}
