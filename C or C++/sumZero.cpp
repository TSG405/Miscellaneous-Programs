// problem statement: zero sum subarray problem
#include <bits/stdc++.h>
#define sp2(a,b), cout << a << " " << b << endl;
#define sp1(k), cout << k << endl;
using std::cin;
using std::cout;
using std::vector;
using std::ios_base;
using std::unordered_map;
using std::queue;
using std::pair;
using std::endl;
using std::cerr;
void solve()
{
    int n,current=0;
    cin >> n;
    int a[n];
    unordered_map<int, vector<int>>sm;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        current += a[i];
        sm[current].push_back(i);
    }
    cerr << "processing" << endl;
    current = 0;
    int ctr = 0;
    for(auto i = sm.begin();i!=sm.end();i++)
    {
        cerr << "infor loop" << endl;
        if(sm[i->first].size() == 2)
        {
            if(current == 0)
            {
                cout << "Subrrays: " << endl;
                current = 1;
            }
            cout << "{ ";
            int i1 = sm[i->first][0];
            int i2 = sm[i->first][1];
            ctr++;
            for(int k=i1+1;k<=i2;k++)
                cout << a[k] << " ";
            cout << "}\n";
        }
    }
    cout << ctr << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
