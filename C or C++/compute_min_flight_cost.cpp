#include <bits/stdc++.h>

#define lli long long int
#define ull unsigned long long
#define MX 100000
#define limit INT_MAX

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
int n,m;
unordered_map<string,bool> visited;
string start_node,end_node;
struct hash_pair
{
    template <class T1, class T2>
    size_t operator()(const pair<T1, T2>& p) const
    {
        auto hash1 = hash<T1>{}(p.first);
        auto hash2 = hash<T2>{}(p.second);
        return hash1 ^ hash2;
    }
};
//currently mapped s: pair<any dt,any dt>->bool with custom hash function as hash_pair
//change data types of pair and mapped value accordingly
unordered_map<pair<int,int>, long long int,hash_pair> mp;
unordered_map<int,vector<int>> gph;
string content[MX];
int D[MX][MX];
unordered_map<string,int> str_to_index;
struct Min_Heap
{
    vector<pair<lli,int>> heap;
    unordered_map<lli,int> num2indx;

};
void initialise_Distances()
{
    //implementation of dijkstra's algorithm
    auto cmp = [](pair<lli,int> left, pair<lli, int> right)
    {
        return(left.first > right.first || left.first == right.first);
    };
    priority_queue<pair<lli,int>, vector<pair<lli,int>>, decltype(cmp)> minheap(cmp);
    minheap.push(make_pair(0,str_to_index[start_node]));
}
/*
 * array of strings of airport codes
 * graph : unordered_map<int,vector<int>> gph
 */

int main()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            D[i][j] = limit;
    int dist;
    string from,to;
    for(int i=0;i<n;i++)
    {
        cin >> content[i];
        str_to_index[content[i]] = i;
    }
    for(int i=0;i<m;i++)
    {
        cin >> from >> to;
        cin >> dist;
        mp[make_pair(str_to_index[from],str_to_index[to])] = dist;
        gph[str_to_index[from]].push_back(str_to_index[to]);
    }
    cin >> start_node >> end_node;
    return 0;
}
