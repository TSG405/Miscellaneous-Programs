/*
    * Problem statement:
    * https://codeforces.com/problemset/problem/1360/E
*/
#include <bits/stdc++.h>
#define MX 50
using namespace std;
int t,n;
bitset<1> b[MX][MX];
void undo_bit_cols(int r, int c)
{
    b[r][c] = 0;
    if(r > 0 && b[r-1][c] == 1)
        undo_bit_cols(r-1,c);
    if(c > 0 && b[r][c-1] == 1)
        undo_bit_cols(r,c-1);
}
void solve()
{
    cin >> t;
    for(int h=0;h<t;h++)
    {
        cin >> n;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin >> b[i][j];
        for(int i=0;i<n;i++)
            if(b[n-1][i] == 1)
                undo_bit_cols(n-1,i);
        for(int i=0;i<n;i++)
            if(b[i][n-1] == 1)
                undo_bit_cols(i,n-1);
        int ct=0;
        for(int i=0;i < n; i++)
            for(int j=0;j < n; j++)
                if(b[i][j] == 0)
                    ct++;
        cout << ((ct == n*n)? "YES":"NO") << endl;
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
