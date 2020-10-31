#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <list>
#include <time.h>
#include <algorithm>
#define two_space(a,b), cout << a << " " << b << endl;
#define one_line(k), cout << k << endl;
using namespace std;

struct Node
{
    Node *l, *r, *p;
    int data;
};
Node* parent(Node *u)
{
    return(u->p);
}
Node* right(Node *u)
{
    return(u->r);
}
Node* left(Node *u)
{
    return(u->l);
}
void insert(int n, Node *k, Node *par)
{
    k->data = n;
    k->p = par;
}
void solve()
{
    
}

int main()
{
    ios::sync_with_stdio(0);
    solve();
    vector<int> o;
    
    return 0;
}
