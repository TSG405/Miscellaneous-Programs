#include <bits/stdc++.h>
#define sp2(a,b), cout << a << " " << b << endl;
#define sp1(k), cout << k << endl;
using std::cin;
using std::cout;
using std::ios;
using std::endl;
using std::min;
long int nS(long int r,long int g,long int b,long int w)
{
    return (r%2+g%2+b%2+w%2);
}
void solve()
{
    long int h,T,nC,r,g,b,w;
    cin >> T;
    for(int i=0;i<T;i++)
    {
        cin >> r >> g >> b >> w;
        nC = nS(r,g,b,w);
        if(nC > 1)
        {
            if(r>0 && b > 0 && g > 0)
            {
                w += 3;
                r -= 1;
                g -= 1;
                b -= 1;
                if(nS(r,g,b,w) <= 1)
                    cout << "Yes" << endl;
                else
                    cout << "No" << endl;
            }
            else
                cout << "No" << endl;
        }
        else
            cout << "Yes" << endl;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    solve();
    return 0;
}
