#include <bits/stdc++.h>
using std::cin;
using std::cout;
using std::ios;
using std::min;
using std::endl;
using namespace std;
void solve()
{
    int n,t,m=0;
    bool b;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        b = true;
        cin >> n;
        int a[n];
        for(int j=0;j<n;j++)
        {
            cin >> a[j];
            if(j == 0)
                m = a[j];
            else
                m = min(m,a[j]);
        }
        cout << "accepted" << endl;
        for(int j=0;b && j<n;j++)
        {
            cout << "inside the loop" << endl;
            if(a[j] % m != 0)
                b = false;
        }
        cout << "exit" << endl;
        if(b)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    solve();
    return 0;
}
