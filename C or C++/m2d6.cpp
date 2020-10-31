#include <bits/stdc++.h>
#define sp2(a,b), cout << a << " " << b << endl;
#define sp1(k), cout << k << endl;
using std::cin;
using std::cout;
using std::vector;
using std::ios;
using std::unordered_map;
using std::endl;
int n2,n3;
int ctr[] = {0,0};
bool counter(long int n)
{
    ctr[0] = 0;
    ctr[1] = 0;
    while(n%2 == 0)
    {
        ctr[0]++;
        n /= 2;
    }
    while(n%3 == 0)
    {
        ctr[1]++;
        n /= 3;
    }
    if(n == 1)
        return true;
    return false;
}

void solve()
{
    
    long int t,n;
    bool h=false;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        cin >> n;
        h = counter(n);
        //cout << "n = " << n << "; 2 = " << ctr[0] << " 3 = " << ctr[1] << endl;
        if(h)
        {
            if(ctr[0] > ctr[1])
                cout << -1 << endl;
            else
                cout << ctr[1]-ctr[0] + ctr[1] << endl;
        }
        else
            cout << -1 << endl;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    solve();
    return 0;
}
