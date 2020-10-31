#include <bits/stdc++.h>

#define ll long long
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

int n,m;
ll ranked[2*MX],player[2*MX];

struct Node
{
    int score;
    int current_rank;
};
/*
Heap -> (Node)
push into the heap
        { append it to the end of the array
          perform the siftUp operation }
index = i
Node nd;
int cr (current rank);
nd.score = new_score;

*/
struct Heap
{
    vector<ll> rank;
    vector<ll> play;
    int parent(int i)
    {
        return floor((i-1)/2);
    }
    int left(int i)
    {
        return 2*i+1;
    }
    int right(int i)
    {
        return 2*i+2;
    }
    void siftUp(int i)
    {
        while(rank[parent(i)])
    }
    void buildHeap()
    {

    }
}


/*
 * ranked -> binary max-heap -> int array of objects of struct Node
 * push into ranked
 *  -> score in player[0]:- score = player[0],current_rank = ;
 *


void solve()
{
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> ranked[i];

    }
}

int main()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    return 0;
}
