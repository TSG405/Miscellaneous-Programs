#include <bits/stdc++.h>
#define sp2(a,b), cout << a << " " << b << endl;
#define sp1(k), cout << k << endl;
using std::cin;
using std::cout;
using std::vector;
using std::ios;
using std::unordered_map;
using std::endl;
using std::stack;
unordered_map<int, vector<int>> gph;
unordered_map<int, vector<int>> rev_gph;
stack<int> s;
unordered_map<int, vector<int>> final_DAG;
unordered_map<int,bool> visited;
int ind=0,E,V;
void insertToGraph(int node,int target)
{
    gph[node].push_back(target);
    rev_gph[target].push_back(node);
}
void firstKRaju(int i)
{
    visited[i] = true;
    for(auto j = gph[i].begin();j!=gph[i].end();j++)
        if(!visited[*j])
            firstKRaju(*j);
    s.push(i);
}
void krjDFS(int v)
{
    final_DAG[ind].push_back(v);
    visited[v] = true;
    for(auto i=rev_gph[v].begin();i!=rev_gph[v].end();i++)
    {
        if(!visited[*i])
            krjDFS(*i);
    }
}
void initVis()
{
    for(int i=0;i<E;i++)
        visited[i] = false;
}
void secondKRaju()
{
    int v;
    while(!s.empty())
    {
        v = s.top();
        s.pop();
        if(!visited[v])
        {
            krjDFS(v);
            ind++;
        }
    }
}
void kosaraju()
{
    initVis();
    for(int i=0;i<E;i++)
    {
        if(!visited[i])
            firstKRaju(i);
    }
    initVis();
    secondKRaju();
}
int main()
{
    //final DAG formed is stored in final_DAG graph
    ios::sync_with_stdio(0);
    cin >> V >> E;
    int x,y;
    for(int i=0;i<E;i++)
    {
        cin >> x >> y;
        insertToGraph(x-1,y-1);
    }
    kosaraju();
    cout << ind << endl;
    return 0;
}
