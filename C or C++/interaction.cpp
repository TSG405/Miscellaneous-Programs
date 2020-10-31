#include <bits/stdc++.h>
#define sp2(a,b), cout << a << " " << b << endl;
#define sp1(k), cout << k << endl;
using std::cin;
using std::cout;
using std::vector;
using std::ios_base;
using std::unordered_map;
using std::floor;
using std::endl;
int n;
int a[100000];
int numShouldBe(int h)
{
    return floor(n%h);
}
void recFind(int sel,int low,int high)
{
    //1 -> even
    //0 -> odd
    int r,f = floor(high+low)/2;
    if(f%2 == sel)
        f--;
    cout << "A" << " " << f << endl;
    cin >> r;
    if(low < high)
    {
        if(r == 0)
            recFind(sel,low,f);
        else
            recFind(sel,f,high);
    }
    else
    {
        if(r == 1)
            cout << "C" << " " << low << endl;
    }
}

void solve()
{
    cin >> n;
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        a[i] = (i+1);
        mp[i+1] = floor(n%(i+1));
    }
    int ret=0;
    char sel=' ';
    int dp = 0;
    bool active = true;
    cout << "B" << " " << 2 << endl;
    cin >> ret;
    cout << "A" << " " << 2 << endl;
    cin >> ret;
    if(numShouldBe(2) == ret)// x is odd
    {
        recFind(0,1,n);
    }
    else // x is even
    {
        recFind(1,2,n);
        int strt = floor(n/2);
        /*do
        {
            bool e = recFindEven(strt);
        }while(strt != numShouldBe(strt));*/
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
