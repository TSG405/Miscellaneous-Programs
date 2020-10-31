#include <bits/stdc++.h>
#define sp2(a,b), cout << a << " " << b << endl;
#define sp1(k), cout << k << endl;
using std::cin;
using std::cout;
using std::vector;
using std::ios;
using std::unordered_map;
using std::vector;
using std::endl;
void solve()
{
    int t=400,n=0,k=1;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        cin >> n >> k;
        //cout << (i+1) << " n = " << n <<" k = " << k << ":- ";
        if(abs(abs(k)-abs(n-k)) != k)
        {
            if(n < k)
                cout << k-n << endl;
            else
                cout << ((n%2 == k%2)? 0:1) << endl;
        }
        else
            cout << 0 << endl;
        /*if(k == 78)
        {
            n++;
            k = 1;
        }
        else
            k++;*/
    }
}
int main()
{
    ios::sync_with_stdio(0);
    solve();
    return 0;
}
