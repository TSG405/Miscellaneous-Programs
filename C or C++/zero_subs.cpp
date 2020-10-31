#include <bits/stdc++.h>

#define lli long long int
#define ull unsigned long long
#define MX 100000

using std::cin;
using std::cout;
using std::cerr;
using std::floor;
using std::ceil;
using std::vector;
using std::unordered_map;
using std::map;
using std::endl;
using std::stack;
using std::queue;
using std::max;
using std::min;
using std::deque;
using std::priority_queue;
using std::bitset;
using std::set;
using std::sort;
using std::hash;
using std::pair;
using std::make_pair;
using std::string;
using std::swap;
using std::hash;
int n;
long long a[2*MX];

int main()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for(int i=0;i<n;i++)
        cin >> a[i];
    long long int sm = 0;
    unordered_map<long long int,pair<int,int>> mps;
    int y = 0;
    mps[0] = make_pair(-1,-1);
    for(int i=0;i<n;i++)
    {
        if(mps.find(sm) != mps.end())
        {
            mps[sm] = make_pair(mps[sm].first,i);
            y++;
        }
        else
        {
            mps[sm] = make_pair(i+1,-1);
        }
        sm += a[i];
    }
    cout << y << endl;
    /*
    auto cmp = [](pair<int,bool> left, pair<int,bool> right)
    {
        return (left.first > right.first || left.first == right.first);
    };
    priority_queue<pair<int,bool>,vector<pair<int,bool>>, decltype(cmp)> tree(cmp);
    for(unordered_map<long long int, pair<int,int>>::iterator it = mps.begin();it != mps.end();it++)
    {
        if(it->second.second != -1)
        {
            tree.push(make_pair(it->second.first,true));
            tree.push(make_pair(it->second.second,false));
        }
    }
    int stc = 0;
    int ctr=0;
    while(!tree.empty())
    {
        pair<int,bool> p = tree.top();
        tree.pop();
        if(p.second == true)
            stc++;
        if(p.second == false)
            stc--;
        if(stc == 0)
            ctr++;
    }
    cout << ctr << endl;
    */
    return 0;
}
