//gold mine problem: https://www.geeksforgeeks.org/gold-mine-problem/?ref=lbp
#include <bits/stdc++.h>
#define MX 1000
using namespace std;
int n,m;
int D[MX+2][MX+2];
int a[MX][MX];

void solve()
{
    int mx = -1,cns_i=0,cns_j=0;
    for(int j=1;j<=m;j++)
    {
        for(int i=1;i<=n;i++)
        {
            D[i][j]= max(D[i-1][j-1],max(D[i+1][j-1],D[i][j-1])) + a[i-1][j-1];
            if(D[i][j] > mx)
            {
                mx = D[i][j];
                cns_i = i;
                cns_j = j;
            }
        }
    }
    cout << "Maximum possibleamount to be mined = " << mx << endl;
    int t,i = cns_i;
    stack<pair<int,int>> st;
    while(cns_j > 0)
    {
        st.push(make_pair(i-1,cns_j-1));
        t = D[i][cns_j] - a[i-1][cns_j-1];
        if(t == D[i-1][cns_j-1])
            i = i - 1;
        else if(t == D[i+1][cns_j-1])
            i = i + 1;
        cns_j--;
    }
    cout << "Path (0-indexed): { ";
    while(!st.empty())
    {
        cout << "(" << st.top().first << ", " << st.top().second << ")";
        st.pop();
        if(!st.empty())
            cout << " -> ";
    }
    cout << " }" << endl;
}
int main()
{
    /*
     * gold mine problem
     * https://www.geeksforgeeks.org/gold-mine-problem/?ref=lbp
     */
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for(int i=0;i<=n+1;i++)
        for(int j=0;j<=m;j++)
            D[i][j] = 0;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin >> a[i][j];
    solve();
    return 0;
}
