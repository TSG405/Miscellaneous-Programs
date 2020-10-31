#include <bits/stdc++.h>
using namespace std;

int edit(string a, string b)
{
    int n = a.size();
    int m = b.size();
    int D[n+1][m+1];
    for(int i=0;i<n+1;i++)
        D[i][0] = i;
    for(int i=0;i<m+1;i++)
        D[0][i] = i;
    for(int j=1;j<=m;j++)
    {
        for(int i=1;i<=n;i++)
        {
            if(a[i-1] == b[j-1])
                D[i][j] = min(D[i][j-1]+1,min(D[i-1][j]+1,D[i-1][j-1]));
            else
                D[i][j] = min(D[i][j-1]+1,min(D[i-1][j]+1,D[i-1][j-1]+1));
        }
    }
    return D[n][m];
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string w,x;
    cin >> w >> x;
    cout << edit(w,x) << endl;
    return 0;
}
