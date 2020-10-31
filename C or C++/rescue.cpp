#include <bits/stdc++.h>
#include <queue>

#define lli long long int
#define ull unsigned long long
#define MX 100000

using std::cin;
using std::cout;
using std::cerr;
using std::floor;
using std::ceil;
using std::vector;
using std::ios_base;
using std::unordered_map;
using std::map;
using std::endl;
using std::stack;
using std::queue;
using std::max;
using std::min;
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
//1420D problem
int n,k;

lli ncr(int tp,int r)
{
    lli k1 = 1,k2 = 1;
    for(int i = 0;i < r;i++)
    {
        k1 = k1*(tp-i);
        k2 = k2*(i+1);
    }
    cerr << tp << " C " << r << " = " << (k1/k2) << endl;
    return(k1/k2);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ncr(7,5);
    cin >> n >> k;
    auto cmp = [](pair<long long,bool> left,pair<long long,bool> right){
        return left.first > right.first || left.first == right.first;
    };
    priority_queue<pair<long long,bool>, vector<pair<long long,bool>>, decltype(cmp)> minHeap(cmp);
    long long l,r;
    for(int i=0;i<n;i++)
    {
        cin >> l >> r;
        minHeap.push(make_pair(l,true));
        minHeap.push(make_pair(r,false));
    }
    int lit_count=0;
    lli countC=0;
    pair<long long,bool> previous = minHeap.top();
    while(!minHeap.empty())
    {
        pair<long long,bool> nd = minHeap.top();
        minHeap.pop();
        if(nd.second == true)
        {
            if(lit_count >= k)
            {
                long long diff = nd.first-previous.first+1;
                countC += diff*ncr(lit_count,k);
            }
            lit_count++;
        }
        if(nd.second == false)
        {
            if(lit_count >= k)
            {
                long long diff = nd.first-previous.first;
                countC += diff*ncr(lit_count,k);
            }
            lit_count--;
            
        }
        previous = nd;
    }
    cout << countC%998244353 << endl;
    return 0;
}
