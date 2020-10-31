#include <bits/stdc++.h>
#define sp2(a,b), cout << a << " " << b << endl;
#define sp1(k), cout << k << endl;
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
        w = 0;
        q = min(x,y);
        x -= q;
        y -= q;
        cout << q*min(b,a) + (x+y)*a << endl;
        /*while(x != 0 || y != 0)
        {
            if(x > 0 && y > 0)
            {
                if(2*a > b)
                {
                    x--;
                    y--;
                    w += b;
                }
            }
        }*/
    }
                

}
int main()
{
    ios::sync_with_stdio(0);
    solve();
    return 0;
}
