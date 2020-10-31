#include <bits/stdc++.h>
#define sp2(a,b), cout << a << " " << b << endl;
#define sp1(k), cout << k << endl;
using std::cin;
using std::cout;
using std::vector;
using std::ios_base;
using std::unordered_map;
using std::endl;
using std::queue;
int n,m;
unordered_map<int, vector<int>> gph;
unordered_map<int, int> rev_gph;
void bfs(int x)
{
    //finds the minimum-distance of y from x
    int u;
    unordered_map<int,int> dist;
    for(int i=1;i<=n;i++)
        dist[i] = -1;
    dist[x] = 0;
    queue<int> qu;
    qu.push(x);
    unordered_map<int, int> parents;
    parents[1] = 0;
    while(!qu.empty())
    {
        u = qu.front();
        qu.pop();
        if(gph[u].size() > 0)
            parents[u] = 0;
        //cout << "discovered edge = " << u << endl;
        for(auto r = gph[u].begin();r!=gph[u].end();r++)
        {
            if(dist[*r] == -1)//marker if node r is unchecked
            {
                qu.push(*r);
                dist[*r] = dist[u]+1;
                if(gph[*r].size() == 0)
                    parents[u]++;
            }
        }
    }
    bool b = true;
    //cout << "Data recorded: " << endl;
    for(auto t=parents.begin();b && t!=parents.end();t++)
    {
        //cout << t->first << " -> " << t->second << endl;
        if(t->second <= 2)
            b = false;
    }
    if(b)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
void insertGph(int x, int y)
{
    gph[x].push_back(y);
    rev_gph[y] = x;
}
void solve()
{
    cin >> n;
    int x;
    for(int i=1;i<n;i++)
    {
        cin >> x;
        insertGph(x,i+1);
    }
    bfs(1);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
