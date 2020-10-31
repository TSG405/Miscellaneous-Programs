#include <bits/stdc++.h>
//problem: https://codeforces.com/problemset/problem/115/A
using std::cin;
using std::cout;
using std::vector;
using std::ios_base;
using std::unordered_map;
using std::max;
using std::endl;
unordered_map<int,vector<int>> g;
int n;

int countDFS(int i)
{
    int c=0;
    for(auto k=g[i].begin();k != g[i].end();k++)
        c = max(c,countDFS(*k)+1);
    return c;
}

void solve()
{
    int x;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> x;
        g[x].push_back(i);
    }
    cout << countDFS(-1) << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
